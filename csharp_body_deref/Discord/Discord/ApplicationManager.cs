// ==================== AoTTG2 cross-reference ====================
// Type: Discord.ApplicationManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000075")]
public class ApplicationManager
{
	[Token(Token = "0x2000076")]
	internal struct FFIEvents
	{
	}

	[Token(Token = "0x2000077")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000078")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ValidateOrExitCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000079")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ValidateOrExitMethod(IntPtr methodsPtr, IntPtr callbackData, ValidateOrExitCallback callback);

		[Token(Token = "0x200007A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetCurrentLocaleMethod(IntPtr methodsPtr, StringBuilder locale);

		[Token(Token = "0x200007B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetCurrentBranchMethod(IntPtr methodsPtr, StringBuilder branch);

		[Token(Token = "0x200007C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetOAuth2TokenCallback(IntPtr ptr, Result result, ref OAuth2Token oauth2Token);

		[Token(Token = "0x200007D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetOAuth2TokenMethod(IntPtr methodsPtr, IntPtr callbackData, GetOAuth2TokenCallback callback);

		[Token(Token = "0x200007E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetTicketCallback(IntPtr ptr, Result result, ref string data);

		[Token(Token = "0x200007F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetTicketMethod(IntPtr methodsPtr, IntPtr callbackData, GetTicketCallback callback);

		[Token(Token = "0x4000159")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ValidateOrExitMethod ValidateOrExit;

		[Token(Token = "0x400015A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal GetCurrentLocaleMethod GetCurrentLocale;

		[Token(Token = "0x400015B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetCurrentBranchMethod GetCurrentBranch;

		[Token(Token = "0x400015C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GetOAuth2TokenMethod GetOAuth2Token;

		[Token(Token = "0x400015D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal GetTicketMethod GetTicket;
	}

	[Token(Token = "0x2000080")]
	public delegate void ValidateOrExitHandler(Result result);

	[Token(Token = "0x2000081")]
	public delegate void GetOAuth2TokenHandler(Result result, ref OAuth2Token oauth2Token);

	[Token(Token = "0x2000082")]
	public delegate void GetTicketHandler(Result result, ref string data);

	[Token(Token = "0x4000157")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x4000158")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x17000006")]
	private FFIMethods Methods
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x2334520", Offset = "0x2334520", VA = "0x2334520")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x2332010", Offset = "0x2332010", VA = "0x2332010")]
	internal ApplicationManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x2334630", Offset = "0x2334630", VA = "0x2334630")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x2334260", Offset = "0x2334260", VA = "0x2334260")]
	[MonoPInvokeCallback]
	private static void ValidateOrExitCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x2334690", Offset = "0x2334690", VA = "0x2334690")]
	public void ValidateOrExit(ValidateOrExitHandler callback)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x2334870", Offset = "0x2334870", VA = "0x2334870")]
	public string GetCurrentLocale()
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x2334910", Offset = "0x2334910", VA = "0x2334910")]
	public string GetCurrentBranch()
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x2334340", Offset = "0x2334340", VA = "0x2334340")]
	[MonoPInvokeCallback]
	private static void GetOAuth2TokenCallbackImpl(IntPtr ptr, Result result, ref OAuth2Token oauth2Token)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x23349B0", Offset = "0x23349B0", VA = "0x23349B0")]
	public void GetOAuth2Token(GetOAuth2TokenHandler callback)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x2334430", Offset = "0x2334430", VA = "0x2334430")]
	[MonoPInvokeCallback]
	private static void GetTicketCallbackImpl(IntPtr ptr, Result result, ref string data)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x2334B90", Offset = "0x2334B90", VA = "0x2334B90")]
	public void GetTicket(GetTicketHandler callback)
	{
	}
}
