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

[Token(Token = "0x200019B")]
public class RefreshEventArgs : EventArgs
{
	[Token(Token = "0x17000262")]
	public object ComponentChanged
	{
		[Token(Token = "0x6000AE2")]
		[Address(RVA = "0x62491C0", Offset = "0x62481C0", VA = "0x62491C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	public Type TypeChanged
	{
		[Token(Token = "0x6000AE3")]
		[Address(RVA = "0x62491D0", Offset = "0x62481D0", VA = "0x62491D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x62490C0", Offset = "0x62480C0", VA = "0x62490C0")]
	public RefreshEventArgs(object componentChanged)
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x6249150", Offset = "0x6248150", VA = "0x6249150")]
	public RefreshEventArgs(Type typeChanged)
	{
	}
}
