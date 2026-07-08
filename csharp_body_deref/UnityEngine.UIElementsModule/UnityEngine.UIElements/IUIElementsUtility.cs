using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003FF")]
internal interface IUIElementsUtility
{
	[Token(Token = "0x60019FD")]
	bool TakeCapture();

	[Token(Token = "0x60019FE")]
	bool ReleaseCapture();

	[Token(Token = "0x60019FF")]
	bool ProcessEvent(int instanceID, IntPtr nativeEventPtr, ref bool eventHandled);

	[Token(Token = "0x6001A00")]
	bool CleanupRoots();

	[Token(Token = "0x6001A01")]
	bool EndContainerGUIFromException(Exception exception);

	[Token(Token = "0x6001A02")]
	bool MakeCurrentIMGUIContainerDirty();
}
