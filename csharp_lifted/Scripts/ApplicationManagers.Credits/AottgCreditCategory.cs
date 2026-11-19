// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditCategory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000998")]
public sealed class AottgCreditCategory
{
	[Token(Token = "0x17000F60")]
	public string Name
	{
		[Token(Token = "0x6005983")]
		[Address(RVA = "0x5D22650", Offset = "0x5D21650", VA = "0x5D22650")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c (ApplicationManagers.Credits.AottgCreditCategory$$get_Name): clean
			return this._Name_k__BackingField;
		}
		[Token(Token = "0x6005984")]
		[Address(RVA = "0x5D22660", Offset = "0x5D21660", VA = "0x5D22660")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c (ApplicationManagers.Credits.AottgCreditCategory$$set_Name): clean
			this._Name_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F61")]
	public string Description
	{
		[Token(Token = "0x6005985")]
		[Address(RVA = "0x5D22670", Offset = "0x5D21670", VA = "0x5D22670")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c (ApplicationManagers.Credits.AottgCreditCategory$$get_Description): clean
			return this._Description_k__BackingField;
		}
		[Token(Token = "0x6005986")]
		[Address(RVA = "0x5D22680", Offset = "0x5D21680", VA = "0x5D22680")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c (ApplicationManagers.Credits.AottgCreditCategory$$set_Description): clean
			this._Description_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F62")]
	public IReadOnlyList<AottgCreditContributor> Contributors
	{
		[Token(Token = "0x6005987")]
		[Address(RVA = "0x5D22690", Offset = "0x5D21690", VA = "0x5D22690")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c (ApplicationManagers.Credits.AottgCreditCategory$$get_Contributors): clean
			return this._Contributors_k__BackingField;
		}
		[Token(Token = "0x6005988")]
		[Address(RVA = "0x5D226A0", Offset = "0x5D216A0", VA = "0x5D226A0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c (ApplicationManagers.Credits.AottgCreditCategory$$set_Contributors): clean
			this._Contributors_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F63")]
	public IReadOnlyList<AottgCreditGroup> Groups
	{
		[Token(Token = "0x6005989")]
		[Address(RVA = "0x5D226B0", Offset = "0x5D216B0", VA = "0x5D226B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c (ApplicationManagers.Credits.AottgCreditCategory$$get_Groups): clean
			return this._Groups_k__BackingField;
		}
		[Token(Token = "0x600598A")]
		[Address(RVA = "0x5D226C0", Offset = "0x5D216C0", VA = "0x5D226C0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c (ApplicationManagers.Credits.AottgCreditCategory$$set_Groups): clean
			this._Groups_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6005982")]
	[Address(RVA = "0x5D22540", Offset = "0x5D21540", VA = "0x5D22540")]
	public AottgCreditCategory(string name, string description, AottgCreditContributor[] contributors, AottgCreditGroup[] groups)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditCategory.c (ApplicationManagers.Credits.AottgCreditCategory$$.ctor): clean
		ReadOnlyCollection<T> pSVar1;

		base();
		this._Name_k__BackingField = name;
		this._Description_k__BackingField = description;
		if (contributors == null) {
			contributors = (AottgCreditContributor[])new AottgCreditContributor[0];
		}
		pSVar1 = Array.AsReadOnly<AottgCreditContributor>((Object[])contributors);
		this._Contributors_k__BackingField =(IReadOnlyList<AottgCreditContributor>)pSVar1;
		if (groups == null) {
			groups = (AottgCreditGroup[])new AottgCreditGroup[0];
		}
		pSVar1 = Array.AsReadOnly<AottgCreditGroup>((Object[])groups);
		this._Groups_k__BackingField =(IReadOnlyList<AottgCreditGroup>)pSVar1;
		return;
	}
}
