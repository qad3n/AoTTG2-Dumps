// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditGroup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditGroup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000999")]
public sealed class AottgCreditGroup
{
	[Token(Token = "0x17000F64")]
	public string Title
	{
		[Token(Token = "0x600598C")]
		[Address(RVA = "0x5D22780", Offset = "0x5D21780", VA = "0x5D22780")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600598D")]
		[Address(RVA = "0x5D22790", Offset = "0x5D21790", VA = "0x5D22790")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F65")]
	public string Description
	{
		[Token(Token = "0x600598E")]
		[Address(RVA = "0x5D227A0", Offset = "0x5D217A0", VA = "0x5D227A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600598F")]
		[Address(RVA = "0x5D227B0", Offset = "0x5D217B0", VA = "0x5D227B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F66")]
	public IReadOnlyList<AottgCreditContributor> Contributors
	{
		[Token(Token = "0x6005990")]
		[Address(RVA = "0x5D227C0", Offset = "0x5D217C0", VA = "0x5D227C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005991")]
		[Address(RVA = "0x5D227D0", Offset = "0x5D217D0", VA = "0x5D227D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600598B")]
	[Address(RVA = "0x5D226D0", Offset = "0x5D216D0", VA = "0x5D226D0")]
	public AottgCreditGroup(string title, string description, AottgCreditContributor[] contributors)
	{
	}
}
