# DualSync-COM-DCOM
# COMCallBridge 🔄  
**Bidirectional COM/DCOM Communication with Async Callbacks**  

![COM/DCOM Architecture](https://img.shields.io/badge/Architecture-COM%2FDCOM-blue)  
![Windows 11](https://img.shields.io/badge/OS-Windows%2011-0078D6)  
![Visual Studio 2022](https://img.shields.io/badge/IDE-Visual%20Studio%202022-5C2D91)  

A project demonstrating bidirectional communication between a COM/DCOM server and client using asynchronous callbacks. The server triggers notifications in the client via interface `ICallback`, supporting both synchronous and delayed async calls.

---

## 🚀 Features  
- **Bidirectional COM/DCOM Communication**: Server and client interact via interfaces.  
- **Async Callbacks**: Server invokes client methods after configurable delays.  
- **Cookie-Based Registration**: Secure client-server pairing with unique identifiers.  
- **MFC Client GUI**: User-friendly interface to test sync/async calls.  
- **Proxy/Stub Automation**: ATL-generated proxy/stub modules for DCOM support.  

---

## ⚙️ Prerequisites  
- **Visual Studio** (v17.6+) with:  
  - *Desktop Development with C++* (ATL, MFC)  
  - *Windows 10/11 SDK* (10.0.22621.0)  
- **Admin Rights** (for COM registration)  

---

## 🛠️ Setup  
Open in Visual Studio:

1. Load *DualServer.sln* (server) and *DualClient.sln* (client).

2. Build the Server: Right-click DualServer > Build (ensures *DualServer.exe* and *DualServerPS.dll* are generated).

3. **Register COM Components**:

*powershell*
*cd .\DualServer\Debug  *
*regsvr32 DualServerPS.dll  # Proxy/Stub  *
*DualServer.exe -RegServer  # Register server  *
*Build the Client:*
Start the Server:

*powershell*
*.\DualServer\Debug\DualServer.exe  *

4. Run the Client:

Launch *DualClient.exe* from *DualClient\Debug*.

## Functionality

Sync Call: **Click Now → Immediate popup with "Mesaj 1 de la server".**

Async Call:  **Enter delay (e.g., 10 seconds) → Click Later → Popup appears after 10 seconds.**