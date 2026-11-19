// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditGroup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditGroup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditGroup.c (ApplicationManagers.Credits.AottgCreditGroup$$get_Title): clean
			return this._Title_k__BackingField;
		}
		[Token(Token = "0x600598D")]
		[Address(RVA = "0x5D22790", Offset = "0x5D21790", VA = "0x5D22790")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditGroup.c (ApplicationManagers.Credits.AottgCreditGroup$$set_Title): clean
			this._Title_k__BackingField = value;
			return;
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
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditGroup.c (ApplicationManagers.Credits.AottgCreditGroup$$get_Description): clean
			return this._Description_k__BackingField;
		}
		[Token(Token = "0x600598F")]
		[Address(RVA = "0x5D227B0", Offset = "0x5D217B0", VA = "0x5D227B0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditGroup.c (ApplicationManagers.Credits.AottgCreditGroup$$set_Description): clean
			this._Description_k__BackingField = value;
			return;
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
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditGroup.c (ApplicationManagers.Credits.AottgCreditGroup$$get_Contributors): clean
			return this._Contributors_k__BackingField;
		}
		[Token(Token = "0x6005991")]
		[Address(RVA = "0x5D227D0", Offset = "0x5D217D0", VA = "0x5D227D0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditGroup.c (ApplicationManagers.Credits.AottgCreditGroup$$set_Contributors): clean
			this._Contributors_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x600598B")]
	[Address(RVA = "0x5D226D0", Offset = "0x5D216D0", VA = "0x5D226D0")]
	public AottgCreditGroup(string title, string description, AottgCreditContributor[] contributors)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditGroup.c (ApplicationManagers.Credits.AottgCreditGroup$$.ctor): clean
		ReadOnlyCollection<T> pSVar1;

		base();
		this._Title_k__BackingField = title;
		this._Description_k__BackingField = description;
		if (contributors == null) {
			contributors = (AottgCreditContributor[])new AottgCreditContributor[0];
		}
		pSVar1 = Array.AsReadOnly<AottgCreditContributor>((Object[])contributors);
		this._Contributors_k__BackingField =(IReadOnlyList<AottgCreditContributor>)pSVar1;
		return;
	}
}
