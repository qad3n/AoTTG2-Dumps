using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.VFX;

[Token(Token = "0x200000C")]
public struct VFXOutputEventArgs
{
	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly int _003CnameId_003Ek__BackingField;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly VFXEventAttribute _003CeventAttribute_003Ek__BackingField;

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4DE2490", Offset = "0x4DE2490", VA = "0x4DE2490")]
	public VFXOutputEventArgs(int nameId, VFXEventAttribute eventAttribute)
	{
	}
}
