// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009BC")]
public sealed class AottgApiResult
{
	[Token(Token = "0x17000F94")]
	public bool Success
	{
		[Token(Token = "0x6005A61")]
		[Address(RVA = "0x5D2AC20", Offset = "0x5D29C20", VA = "0x5D2AC20")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$get_Success): clean
			return this._Success_k__BackingField;
		}
		[Token(Token = "0x6005A62")]
		[Address(RVA = "0x5D2AC30", Offset = "0x5D29C30", VA = "0x5D2AC30")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$set_Success): clean
			this._Success_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F95")]
	public long StatusCode
	{
		[Token(Token = "0x6005A63")]
		[Address(RVA = "0x5D2AC40", Offset = "0x5D29C40", VA = "0x5D2AC40")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$get_StatusCode): clean
			return this._StatusCode_k__BackingField;
		}
		[Token(Token = "0x6005A64")]
		[Address(RVA = "0x5D2AC50", Offset = "0x5D29C50", VA = "0x5D2AC50")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$set_StatusCode): clean
			this._StatusCode_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F96")]
	public string ResponseText
	{
		[Token(Token = "0x6005A65")]
		[Address(RVA = "0x5D2AC60", Offset = "0x5D29C60", VA = "0x5D2AC60")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$get_ResponseText): clean
			return this._ResponseText_k__BackingField;
		}
		[Token(Token = "0x6005A66")]
		[Address(RVA = "0x5D2AC70", Offset = "0x5D29C70", VA = "0x5D2AC70")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$set_ResponseText): clean
			this._ResponseText_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F97")]
	public JSONNode Json
	{
		[Token(Token = "0x6005A67")]
		[Address(RVA = "0x5D2AC80", Offset = "0x5D29C80", VA = "0x5D2AC80")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$get_Json): clean
			return this._Json_k__BackingField;
		}
		[Token(Token = "0x6005A68")]
		[Address(RVA = "0x5D2AC90", Offset = "0x5D29C90", VA = "0x5D2AC90")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$set_Json): clean
			this._Json_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F98")]
	public string Error
	{
		[Token(Token = "0x6005A69")]
		[Address(RVA = "0x5D2ACA0", Offset = "0x5D29CA0", VA = "0x5D2ACA0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$get_Error): clean
			return this._Error_k__BackingField;
		}
		[Token(Token = "0x6005A6A")]
		[Address(RVA = "0x5D2ACB0", Offset = "0x5D29CB0", VA = "0x5D2ACB0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$set_Error): clean
			this._Error_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F99")]
	public string RawError
	{
		[Token(Token = "0x6005A6B")]
		[Address(RVA = "0x5D2ACC0", Offset = "0x5D29CC0", VA = "0x5D2ACC0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$get_RawError): clean
			return this._RawError_k__BackingField;
		}
		[Token(Token = "0x6005A6C")]
		[Address(RVA = "0x5D2ACD0", Offset = "0x5D29CD0", VA = "0x5D2ACD0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$set_RawError): clean
			this._RawError_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F9A")]
	public bool IsCanceled
	{
		[Token(Token = "0x6005A6D")]
		[Address(RVA = "0x5D2ACE0", Offset = "0x5D29CE0", VA = "0x5D2ACE0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$get_IsCanceled): clean
			return this._IsCanceled_k__BackingField;
		}
		[Token(Token = "0x6005A6E")]
		[Address(RVA = "0x5D2ACF0", Offset = "0x5D29CF0", VA = "0x5D2ACF0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$set_IsCanceled): clean
			this._IsCanceled_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6005A6F")]
	[Address(RVA = "0x5D2A2C0", Offset = "0x5D292C0", VA = "0x5D2A2C0")]
	public static AottgApiResult Ok(long statusCode, string responseText, JSONNode json)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$Ok): clean
		AottgApiResult __this;

		__this = new AottgApiResult();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._Success_k__BackingField = true;
		__this._StatusCode_k__BackingField = statusCode;
		if (responseText == null) {
			responseText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this._ResponseText_k__BackingField = responseText;
		__this._Json_k__BackingField = json;
		return __this;
	}

	[Token(Token = "0x6005A70")]
	[Address(RVA = "0x5D2A1F0", Offset = "0x5D291F0", VA = "0x5D2A1F0")]
	public static AottgApiResult Fail(long statusCode, string responseText, string error, string rawError, bool isCanceled = false)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$Fail): clean
		AottgApiResult __this;

		__this = new AottgApiResult();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._Success_k__BackingField = false;
		__this._StatusCode_k__BackingField = statusCode;
		if (responseText == null) {
			responseText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this._ResponseText_k__BackingField = responseText;
		__this._Error_k__BackingField = error;
		__this._RawError_k__BackingField = rawError;
		__this._IsCanceled_k__BackingField = isCanceled;
		return __this;
	}

	[Token(Token = "0x6005A71")]
	[Address(RVA = "0x5D2AD00", Offset = "0x5D29D00", VA = "0x5D2AD00")]
	public AottgApiResult()
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiResult.c (ApplicationManagers.Api.AottgApiResult$$.ctor): clean
		base();
		return;
	}
}
