using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000500")]
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate float InvokeBaselineFunctionDelegate(ref LayoutNode node, float width, float height);
