// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000997")]
public sealed class AottgCreditsResponse
{
	[Token(Token = "0x17000F5F")]
	public IReadOnlyList<AottgCreditCategory> Categories
	{
		[Token(Token = "0x6005980")]
		[Address(RVA = "0x5D22520", Offset = "0x5D21520", VA = "0x5D22520")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResponse.c (ApplicationManagers.Credits.AottgCreditsResponse$$get_Categories): clean
			return this._Categories_k__BackingField;
		}
		[Token(Token = "0x6005981")]
		[Address(RVA = "0x5D22530", Offset = "0x5D21530", VA = "0x5D22530")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResponse.c (ApplicationManagers.Credits.AottgCreditsResponse$$set_Categories): clean
			this._Categories_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x600597F")]
	[Address(RVA = "0x5D22490", Offset = "0x5D21490", VA = "0x5D22490")]
	public AottgCreditsResponse(AottgCreditCategory[] categories)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResponse.c (ApplicationManagers.Credits.AottgCreditsResponse$$.ctor): clean
		ReadOnlyCollection<T> pSVar1;

		base();
		if (categories == null) {
			categories = (AottgCreditCategory[])new AottgCreditCategory[0];
		}
		pSVar1 = Array.AsReadOnly<AottgCreditCategory>((Object[])categories);
		if (this == null) {
			throw new NullReferenceException();
		}
		this._Categories_k__BackingField =(IReadOnlyList<AottgCreditCategory>)pSVar1;
		return;
	}
}
