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

[Token(Token = "0x20002CF")]
public class RefreshEventArgs : EventArgs
{
	[Token(Token = "0x17000422")]
	public object ComponentChanged
	{
		[Token(Token = "0x600125A")]
		[Address(RVA = "0x48A9CE0", Offset = "0x48A9CE0", VA = "0x48A9CE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000423")]
	public Type TypeChanged
	{
		[Token(Token = "0x600125B")]
		[Address(RVA = "0x48A9CF0", Offset = "0x48A9CF0", VA = "0x48A9CF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x48A9BE0", Offset = "0x48A9BE0", VA = "0x48A9BE0")]
	public RefreshEventArgs(object componentChanged)
	{
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x48A9C70", Offset = "0x48A9C70", VA = "0x48A9C70")]
	public RefreshEventArgs(Type typeChanged)
	{
	}
}
