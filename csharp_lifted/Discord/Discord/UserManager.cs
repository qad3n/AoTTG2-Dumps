// ==================== AoTTG2 cross-reference ====================
// Type: Discord.UserManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000081")]
public class UserManager
{
	[Token(Token = "0x2000082")]
	internal struct FFIEvents
	{
		[Token(Token = "0x2000083")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CurrentUserUpdateHandler(IntPtr ptr);

		[Token(Token = "0x400015C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal CurrentUserUpdateHandler OnCurrentUserUpdate;
	}

	[Token(Token = "0x2000084")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000085")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetCurrentUserMethod(IntPtr methodsPtr, ref User currentUser);

		[Token(Token = "0x2000086")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetUserCallback(IntPtr ptr, Result result, ref User user);

		[Token(Token = "0x2000087")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetUserMethod(IntPtr methodsPtr, long userId, IntPtr callbackData, GetUserCallback callback);

		[Token(Token = "0x2000088")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetCurrentUserPremiumTypeMethod(IntPtr methodsPtr, ref PremiumType premiumType);

		[Token(Token = "0x2000089")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result CurrentUserHasFlagMethod(IntPtr methodsPtr, UserFlag flag, ref bool hasFlag);

		[Token(Token = "0x400015D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal GetCurrentUserMethod GetCurrentUser;

		[Token(Token = "0x400015E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal GetUserMethod GetUser;

		[Token(Token = "0x400015F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetCurrentUserPremiumTypeMethod GetCurrentUserPremiumType;

		[Token(Token = "0x4000160")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal CurrentUserHasFlagMethod CurrentUserHasFlag;
	}

	[Token(Token = "0x200008A")]
	public delegate void GetUserHandler(Result result, ref User user);

	[Token(Token = "0x200008B")]
	public delegate void CurrentUserUpdateHandler();

	[Token(Token = "0x4000159")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x400015A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x400015B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private CurrentUserUpdateHandler m_OnCurrentUserUpdate;

	[Token(Token = "0x17000007")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x3146A80", Offset = "0x3145A80", VA = "0x3146A80")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000005")]
	public event CurrentUserUpdateHandler OnCurrentUserUpdate
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x3146B90", Offset = "0x3145B90", VA = "0x3146B90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x3146C20", Offset = "0x3145C20", VA = "0x3146C20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3142FC0", Offset = "0x3141FC0", VA = "0x3142FC0")]
	internal UserManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3146CB0", Offset = "0x3145CB0", VA = "0x3146CB0")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3146E80", Offset = "0x3145E80", VA = "0x3146E80")]
	public User GetCurrentUser()
	{
		return default(User);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x31468A0", Offset = "0x31458A0", VA = "0x31468A0")]
	[MonoPInvokeCallback]
	private static void GetUserCallbackImpl(IntPtr ptr, Result result, ref User user)
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x3146F30", Offset = "0x3145F30", VA = "0x3146F30")]
	public void GetUser(long userId, GetUserHandler callback)
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x3147110", Offset = "0x3146110", VA = "0x3147110")]
	public PremiumType GetCurrentUserPremiumType()
	{
		return default(PremiumType);
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x31471A0", Offset = "0x31461A0", VA = "0x31471A0")]
	public bool CurrentUserHasFlag(UserFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x3146990", Offset = "0x3145990", VA = "0x3146990")]
	[MonoPInvokeCallback]
	private static void OnCurrentUserUpdateImpl(IntPtr ptr)
	{
	}
}
