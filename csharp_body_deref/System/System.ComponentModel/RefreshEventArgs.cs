// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.RefreshEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001DA")]
public class RefreshEventArgs : EventArgs
{
	[Token(Token = "0x17000291")]
	public object ComponentChanged
	{
		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000292")]
	public Type TypeChanged
	{
		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x28C8D30", Offset = "0x28C7330", VA = "0x1828C8D30")]
	public RefreshEventArgs(object componentChanged)
	{
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x28C8CC0", Offset = "0x28C72C0", VA = "0x1828C8CC0")]
	public RefreshEventArgs(Type typeChanged)
	{
	}
}
