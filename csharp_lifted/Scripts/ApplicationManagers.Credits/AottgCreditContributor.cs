// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditContributor
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditContributor.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200099A")]
public sealed class AottgCreditContributor
{
	[Token(Token = "0x17000F67")]
	public string Name
	{
		[Token(Token = "0x6005993")]
		[Address(RVA = "0x5D22820", Offset = "0x5D21820", VA = "0x5D22820")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditContributor.c (ApplicationManagers.Credits.AottgCreditContributor$$get_Name): clean
			return this._Name_k__BackingField;
		}
		[Token(Token = "0x6005994")]
		[Address(RVA = "0x5D22830", Offset = "0x5D21830", VA = "0x5D22830")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditContributor.c (ApplicationManagers.Credits.AottgCreditContributor$$set_Name): clean
			this._Name_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F68")]
	public string AccountId
	{
		[Token(Token = "0x6005995")]
		[Address(RVA = "0x5D22840", Offset = "0x5D21840", VA = "0x5D22840")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditContributor.c (ApplicationManagers.Credits.AottgCreditContributor$$get_AccountId): clean
			return this._AccountId_k__BackingField;
		}
		[Token(Token = "0x6005996")]
		[Address(RVA = "0x5D22850", Offset = "0x5D21850", VA = "0x5D22850")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditContributor.c (ApplicationManagers.Credits.AottgCreditContributor$$set_AccountId): clean
			this._AccountId_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F69")]
	public bool IsLinked
	{
		[Token(Token = "0x6005997")]
		[Address(RVA = "0x5D22860", Offset = "0x5D21860", VA = "0x5D22860")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditContributor.c (ApplicationManagers.Credits.AottgCreditContributor$$get_IsLinked): clean
			bool bVar1;

			bVar1 = String.IsNullOrEmpty(this._AccountId_k__BackingField);
			return !bVar1;
		}
	}

	[Token(Token = "0x6005992")]
	[Address(RVA = "0x5D227E0", Offset = "0x5D217E0", VA = "0x5D227E0")]
	public AottgCreditContributor(string name, string accountId)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditContributor.c (ApplicationManagers.Credits.AottgCreditContributor$$.ctor): clean
		base();
		this._Name_k__BackingField = name;
		this._AccountId_k__BackingField = accountId;
		return;
	}
}
