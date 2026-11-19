// ==================== AoTTG2 cross-reference ====================
// Type: Discord.AchievementManager
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

[Token(Token = "0x200015A")]
public class AchievementManager
{
	[Token(Token = "0x200015B")]
	internal struct FFIEvents
	{
		[Token(Token = "0x200015C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UserAchievementUpdateHandler(IntPtr ptr, ref UserAchievement userAchievement);

		[Token(Token = "0x40001F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal UserAchievementUpdateHandler OnUserAchievementUpdate;
	}

	[Token(Token = "0x200015D")]
	internal struct FFIMethods
	{
		[Token(Token = "0x200015E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetUserAchievementCallback(IntPtr ptr, Result result);

		[Token(Token = "0x200015F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetUserAchievementMethod(IntPtr methodsPtr, long achievementId, byte percentComplete, IntPtr callbackData, SetUserAchievementCallback callback);

		[Token(Token = "0x2000160")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchUserAchievementsCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000161")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchUserAchievementsMethod(IntPtr methodsPtr, IntPtr callbackData, FetchUserAchievementsCallback callback);

		[Token(Token = "0x2000162")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CountUserAchievementsMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x2000163")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetUserAchievementMethod(IntPtr methodsPtr, long userAchievementId, ref UserAchievement userAchievement);

		[Token(Token = "0x2000164")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetUserAchievementAtMethod(IntPtr methodsPtr, int index, ref UserAchievement userAchievement);

		[Token(Token = "0x40001F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal SetUserAchievementMethod SetUserAchievement;

		[Token(Token = "0x40001F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal FetchUserAchievementsMethod FetchUserAchievements;

		[Token(Token = "0x40001F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal CountUserAchievementsMethod CountUserAchievements;

		[Token(Token = "0x40001FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GetUserAchievementMethod GetUserAchievement;

		[Token(Token = "0x40001FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal GetUserAchievementAtMethod GetUserAchievementAt;
	}

	[Token(Token = "0x2000165")]
	public delegate void SetUserAchievementHandler(Result result);

	[Token(Token = "0x2000166")]
	public delegate void FetchUserAchievementsHandler(Result result);

	[Token(Token = "0x2000167")]
	public delegate void UserAchievementUpdateHandler(ref UserAchievement userAchievement);

	[Token(Token = "0x40001F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x40001F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private UserAchievementUpdateHandler m_OnUserAchievementUpdate;

	[Token(Token = "0x17000010")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000522")]
		[Address(RVA = "0x31630B0", Offset = "0x31620B0", VA = "0x31630B0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000016")]
	public event UserAchievementUpdateHandler OnUserAchievementUpdate
	{
		[Token(Token = "0x6000523")]
		[Address(RVA = "0x31631C0", Offset = "0x31621C0", VA = "0x31631C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x3163250", Offset = "0x3162250", VA = "0x3163250")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x31632E0", Offset = "0x31622E0", VA = "0x31632E0")]
	internal AchievementManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x3163360", Offset = "0x3162360", VA = "0x3163360")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x3162DE0", Offset = "0x3161DE0", VA = "0x3162DE0")]
	[MonoPInvokeCallback]
	private static void SetUserAchievementCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x3163530", Offset = "0x3162530", VA = "0x3163530")]
	public void SetUserAchievement(long achievementId, byte percentComplete, SetUserAchievementHandler callback)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x3162EC0", Offset = "0x3161EC0", VA = "0x3162EC0")]
	[MonoPInvokeCallback]
	private static void FetchUserAchievementsCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x3163720", Offset = "0x3162720", VA = "0x3163720")]
	public void FetchUserAchievements(FetchUserAchievementsHandler callback)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x31638F0", Offset = "0x31628F0", VA = "0x31638F0")]
	public int CountUserAchievements()
	{
		return default(int);
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x3163940", Offset = "0x3162940", VA = "0x3163940")]
	public UserAchievement GetUserAchievement(long userAchievementId)
	{
		return default(UserAchievement);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x31639F0", Offset = "0x31629F0", VA = "0x31639F0")]
	public UserAchievement GetUserAchievementAt(int index)
	{
		return default(UserAchievement);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x3162FA0", Offset = "0x3161FA0", VA = "0x3162FA0")]
	[MonoPInvokeCallback]
	private static void OnUserAchievementUpdateImpl(IntPtr ptr, ref UserAchievement userAchievement)
	{
	}
}
