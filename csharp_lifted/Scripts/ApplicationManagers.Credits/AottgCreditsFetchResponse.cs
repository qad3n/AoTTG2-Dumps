// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsFetchResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200099D")]
public sealed class AottgCreditsFetchResponse
{
	[Token(Token = "0x17000F71")]
	public bool Success
	{
		[Token(Token = "0x60059AC")]
		[Address(RVA = "0x5D22A00", Offset = "0x5D21A00", VA = "0x5D22A00")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c (ApplicationManagers.Credits.AottgCreditsFetchResponse$$get_Success): clean
			return this._Success_k__BackingField;
		}
		[Token(Token = "0x60059AD")]
		[Address(RVA = "0x5D22A10", Offset = "0x5D21A10", VA = "0x5D22A10")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c (ApplicationManagers.Credits.AottgCreditsFetchResponse$$set_Success): clean
			this._Success_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F72")]
	public AottgCreditsResponse Credits
	{
		[Token(Token = "0x60059AE")]
		[Address(RVA = "0x5D22A20", Offset = "0x5D21A20", VA = "0x5D22A20")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c (ApplicationManagers.Credits.AottgCreditsFetchResponse$$get_Credits): clean
			return this._Credits_k__BackingField;
		}
		[Token(Token = "0x60059AF")]
		[Address(RVA = "0x5D22A30", Offset = "0x5D21A30", VA = "0x5D22A30")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c (ApplicationManagers.Credits.AottgCreditsFetchResponse$$set_Credits): clean
			this._Credits_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F73")]
	public string Error
	{
		[Token(Token = "0x60059B0")]
		[Address(RVA = "0x5D22A40", Offset = "0x5D21A40", VA = "0x5D22A40")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c (ApplicationManagers.Credits.AottgCreditsFetchResponse$$get_Error): clean
			return this._Error_k__BackingField;
		}
		[Token(Token = "0x60059B1")]
		[Address(RVA = "0x5D22A50", Offset = "0x5D21A50", VA = "0x5D22A50")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c (ApplicationManagers.Credits.AottgCreditsFetchResponse$$set_Error): clean
			this._Error_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x60059AB")]
	[Address(RVA = "0x5D229B0", Offset = "0x5D219B0", VA = "0x5D229B0")]
	private AottgCreditsFetchResponse(bool success, AottgCreditsResponse credits, string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c (ApplicationManagers.Credits.AottgCreditsFetchResponse$$.ctor): clean
		base();
		this._Success_k__BackingField = success;
		this._Credits_k__BackingField = credits;
		this._Error_k__BackingField = error;
		return;
	}

	[Token(Token = "0x60059B2")]
	[Address(RVA = "0x5D22A60", Offset = "0x5D21A60", VA = "0x5D22A60")]
	public static AottgCreditsFetchResponse Ok(AottgCreditsResponse credits)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c (ApplicationManagers.Credits.AottgCreditsFetchResponse$$Ok): clean
		AottgCreditsFetchResponse __this;

		__this = new AottgCreditsFetchResponse();
		__this._Success_k__BackingField = true;
		__this._Credits_k__BackingField = credits;
		__this._Error_k__BackingField = null;
		return __this;
	}

	[Token(Token = "0x60059B3")]
	[Address(RVA = "0x5D22AE0", Offset = "0x5D21AE0", VA = "0x5D22AE0")]
	public static AottgCreditsFetchResponse Fail(string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c (ApplicationManagers.Credits.AottgCreditsFetchResponse$$Fail): clean
		bool bVar1;
		AottgCreditsFetchResponse __this;

		bVar1 = String.IsNullOrEmpty(error);
		if (bVar1) {
			error = "unknown_error";
		}
		__this = new AottgCreditsFetchResponse();
		__this._Success_k__BackingField = false;
		__this._Credits_k__BackingField = null;
		__this._Error_k__BackingField = error;
		return __this;
	}
}
