using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[Token(Token = "0x2000006")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct VFXBatchInfo
{
	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x0")]
	public uint capacity;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x4")]
	public uint activeInstanceCount;
}
