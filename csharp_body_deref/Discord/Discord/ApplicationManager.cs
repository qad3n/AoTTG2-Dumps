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
		[Address(RVA = "0x2334460", Offset = "0x2334460", VA = "0x2334460")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x2331F50", Offset = "0x2331F50", VA = "0x2331F50")]
	internal ApplicationManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x2334570", Offset = "0x2334570", VA = "0x2334570")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x23341A0", Offset = "0x23341A0", VA = "0x23341A0")]
	[MonoPInvokeCallback]
	private static void ValidateOrExitCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x23345D0", Offset = "0x23345D0", VA = "0x23345D0")]
	public void ValidateOrExit(ValidateOrExitHandler callback)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x23347B0", Offset = "0x23347B0", VA = "0x23347B0")]
	public string GetCurrentLocale()
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x2334850", Offset = "0x2334850", VA = "0x2334850")]
	public string GetCurrentBranch()
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x2334280", Offset = "0x2334280", VA = "0x2334280")]
	[MonoPInvokeCallback]
	private static void GetOAuth2TokenCallbackImpl(IntPtr ptr, Result result, ref OAuth2Token oauth2Token)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x23348F0", Offset = "0x23348F0", VA = "0x23348F0")]
	public void GetOAuth2Token(GetOAuth2TokenHandler callback)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x2334370", Offset = "0x2334370", VA = "0x2334370")]
	[MonoPInvokeCallback]
	private static void GetTicketCallbackImpl(IntPtr ptr, Result result, ref string data)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x2334AD0", Offset = "0x2334AD0", VA = "0x2334AD0")]
	public void GetTicket(GetTicketHandler callback)
	{
	}
}
