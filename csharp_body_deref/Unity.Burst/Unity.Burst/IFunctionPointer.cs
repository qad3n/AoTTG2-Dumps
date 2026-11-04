// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.IFunctionPointer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Burst;

[Token(Token = "0x2000029")]
public interface IFunctionPointer
{
	[Token(Token = "0x60000D9")]
	[Obsolete("This method will be removed in a future version of Burst")]
	IFunctionPointer FromIntPtr(IntPtr ptr);
}
