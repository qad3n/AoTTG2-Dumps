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

[Token(Token = "0x2000073")]
public class ApplicationManager
{
	[Token(Token = "0x2000074")]
	internal struct FFIEvents
	{
	}

	[Token(Token = "0x2000075")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000076")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ValidateOrExitCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000077")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void ValidateOrExitMethod(IntPtr methodsPtr, IntPtr callbackData, ValidateOrExitCallback callback);

		[Token(Token = "0x2000078")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetCurrentLocaleMethod(IntPtr methodsPtr, StringBuilder locale);

		[Token(Token = "0x2000079")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetCurrentBranchMethod(IntPtr methodsPtr, StringBuilder branch);

		[Token(Token = "0x200007A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetOAuth2TokenCallback(IntPtr ptr, Result result, ref OAuth2Token oauth2Token);

		[Token(Token = "0x200007B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetOAuth2TokenMethod(IntPtr methodsPtr, IntPtr callbackData, GetOAuth2TokenCallback callback);

		[Token(Token = "0x200007C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetTicketCallback(IntPtr ptr, Result result, ref string data);

		[Token(Token = "0x200007D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetTicketMethod(IntPtr methodsPtr, IntPtr callbackData, GetTicketCallback callback);

		[Token(Token = "0x4000154")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ValidateOrExitMethod ValidateOrExit;

		[Token(Token = "0x4000155")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal GetCurrentLocaleMethod GetCurrentLocale;

		[Token(Token = "0x4000156")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetCurrentBranchMethod GetCurrentBranch;

		[Token(Token = "0x4000157")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GetOAuth2TokenMethod GetOAuth2Token;

		[Token(Token = "0x4000158")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal GetTicketMethod GetTicket;
	}

	[Token(Token = "0x200007E")]
	public delegate void ValidateOrExitHandler(Result result);

	[Token(Token = "0x200007F")]
	public delegate void GetOAuth2TokenHandler(Result result, ref OAuth2Token oauth2Token);

	[Token(Token = "0x2000080")]
	public delegate void GetTicketHandler(Result result, ref string data);

	[Token(Token = "0x4000152")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x4000153")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x17000006")]
	private FFIMethods Methods
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x52B760", Offset = "0x529D60", VA = "0x18052B760")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x52B640", Offset = "0x529C40", VA = "0x18052B640")]
	internal ApplicationManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x52B390", Offset = "0x529990", VA = "0x18052B390")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x52B400", Offset = "0x529A00", VA = "0x18052B400")]
	[MonoPInvokeCallback]
	private static void ValidateOrExitCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x52B510", Offset = "0x529B10", VA = "0x18052B510")]
	public void ValidateOrExit(ValidateOrExitHandler callback)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x52AE50", Offset = "0x529450", VA = "0x18052AE50")]
	public string GetCurrentLocale()
	{
		return null;
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x52ADB0", Offset = "0x5293B0", VA = "0x18052ADB0")]
	public string GetCurrentBranch()
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x52AEF0", Offset = "0x5294F0", VA = "0x18052AEF0")]
	[MonoPInvokeCallback]
	private static void GetOAuth2TokenCallbackImpl(IntPtr ptr, Result result, ref OAuth2Token oauth2Token)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x52B010", Offset = "0x529610", VA = "0x18052B010")]
	public void GetOAuth2Token(GetOAuth2TokenHandler callback)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x52B140", Offset = "0x529740", VA = "0x18052B140")]
	[MonoPInvokeCallback]
	private static void GetTicketCallbackImpl(IntPtr ptr, Result result, ref string data)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x52B260", Offset = "0x529860", VA = "0x18052B260")]
	public void GetTicket(GetTicketHandler callback)
	{
	}
}
