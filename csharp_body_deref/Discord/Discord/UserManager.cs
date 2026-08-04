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

[Token(Token = "0x2000083")]
public class UserManager
{
	[Token(Token = "0x2000084")]
	internal struct FFIEvents
	{
		[Token(Token = "0x2000085")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CurrentUserUpdateHandler(IntPtr ptr);

		[Token(Token = "0x4000161")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal CurrentUserUpdateHandler OnCurrentUserUpdate;
	}

	[Token(Token = "0x2000086")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000087")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetCurrentUserMethod(IntPtr methodsPtr, ref User currentUser);

		[Token(Token = "0x2000088")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetUserCallback(IntPtr ptr, Result result, ref User user);

		[Token(Token = "0x2000089")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void GetUserMethod(IntPtr methodsPtr, long userId, IntPtr callbackData, GetUserCallback callback);

		[Token(Token = "0x200008A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetCurrentUserPremiumTypeMethod(IntPtr methodsPtr, ref PremiumType premiumType);

		[Token(Token = "0x200008B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result CurrentUserHasFlagMethod(IntPtr methodsPtr, UserFlag flag, ref bool hasFlag);

		[Token(Token = "0x4000162")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal GetCurrentUserMethod GetCurrentUser;

		[Token(Token = "0x4000163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal GetUserMethod GetUser;

		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetCurrentUserPremiumTypeMethod GetCurrentUserPremiumType;

		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal CurrentUserHasFlagMethod CurrentUserHasFlag;
	}

	[Token(Token = "0x200008C")]
	public delegate void GetUserHandler(Result result, ref User user);

	[Token(Token = "0x200008D")]
	public delegate void CurrentUserUpdateHandler();

	[Token(Token = "0x400015E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x400015F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x17000007")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x2335CA0", Offset = "0x2335CA0", VA = "0x2335CA0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000005")]
	public event CurrentUserUpdateHandler OnCurrentUserUpdate
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x2335DB0", Offset = "0x2335DB0", VA = "0x2335DB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x2335E40", Offset = "0x2335E40", VA = "0x2335E40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x2332190", Offset = "0x2332190", VA = "0x2332190")]
	internal UserManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x2335ED0", Offset = "0x2335ED0", VA = "0x2335ED0")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x23360A0", Offset = "0x23360A0", VA = "0x23360A0")]
	public User GetCurrentUser()
	{
		return default(User);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x2335AB0", Offset = "0x2335AB0", VA = "0x2335AB0")]
	[MonoPInvokeCallback]
	private static void GetUserCallbackImpl(IntPtr ptr, Result result, ref User user)
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x2336150", Offset = "0x2336150", VA = "0x2336150")]
	public void GetUser(long userId, GetUserHandler callback)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x2336340", Offset = "0x2336340", VA = "0x2336340")]
	public PremiumType GetCurrentUserPremiumType()
	{
		return default(PremiumType);
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x23363D0", Offset = "0x23363D0", VA = "0x23363D0")]
	public bool CurrentUserHasFlag(UserFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x2335BA0", Offset = "0x2335BA0", VA = "0x2335BA0")]
	[MonoPInvokeCallback]
	private static void OnCurrentUserUpdateImpl(IntPtr ptr)
	{
	}
}
