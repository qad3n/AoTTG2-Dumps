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

[Token(Token = "0x200015C")]
public class AchievementManager
{
	[Token(Token = "0x200015D")]
	internal struct FFIEvents
	{
		[Token(Token = "0x200015E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void UserAchievementUpdateHandler(IntPtr ptr, ref UserAchievement userAchievement);

		[Token(Token = "0x40001FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal UserAchievementUpdateHandler OnUserAchievementUpdate;
	}

	[Token(Token = "0x200015F")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000160")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetUserAchievementCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000161")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void SetUserAchievementMethod(IntPtr methodsPtr, long achievementId, byte percentComplete, IntPtr callbackData, SetUserAchievementCallback callback);

		[Token(Token = "0x2000162")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchUserAchievementsCallback(IntPtr ptr, Result result);

		[Token(Token = "0x2000163")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchUserAchievementsMethod(IntPtr methodsPtr, IntPtr callbackData, FetchUserAchievementsCallback callback);

		[Token(Token = "0x2000164")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void CountUserAchievementsMethod(IntPtr methodsPtr, ref int count);

		[Token(Token = "0x2000165")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetUserAchievementMethod(IntPtr methodsPtr, long userAchievementId, ref UserAchievement userAchievement);

		[Token(Token = "0x2000166")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetUserAchievementAtMethod(IntPtr methodsPtr, int index, ref UserAchievement userAchievement);

		[Token(Token = "0x40001FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal SetUserAchievementMethod SetUserAchievement;

		[Token(Token = "0x40001FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal FetchUserAchievementsMethod FetchUserAchievements;

		[Token(Token = "0x40001FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal CountUserAchievementsMethod CountUserAchievements;

		[Token(Token = "0x40001FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GetUserAchievementMethod GetUserAchievement;

		[Token(Token = "0x4000200")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal GetUserAchievementAtMethod GetUserAchievementAt;
	}

	[Token(Token = "0x2000167")]
	public delegate void SetUserAchievementHandler(Result result);

	[Token(Token = "0x2000168")]
	public delegate void FetchUserAchievementsHandler(Result result);

	[Token(Token = "0x2000169")]
	public delegate void UserAchievementUpdateHandler(ref UserAchievement userAchievement);

	[Token(Token = "0x40001F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x40001F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x17000010")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x2352710", Offset = "0x2352710", VA = "0x2352710")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000016")]
	public event UserAchievementUpdateHandler OnUserAchievementUpdate
	{
		[Token(Token = "0x6000525")]
		[Address(RVA = "0x2352820", Offset = "0x2352820", VA = "0x2352820")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x23528B0", Offset = "0x23528B0", VA = "0x23528B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x2352940", Offset = "0x2352940", VA = "0x2352940")]
	internal AchievementManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x23529C0", Offset = "0x23529C0", VA = "0x23529C0")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x2352440", Offset = "0x2352440", VA = "0x2352440")]
	[MonoPInvokeCallback]
	private static void SetUserAchievementCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x2352B90", Offset = "0x2352B90", VA = "0x2352B90")]
	public void SetUserAchievement(long achievementId, byte percentComplete, SetUserAchievementHandler callback)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x2352520", Offset = "0x2352520", VA = "0x2352520")]
	[MonoPInvokeCallback]
	private static void FetchUserAchievementsCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x2352D90", Offset = "0x2352D90", VA = "0x2352D90")]
	public void FetchUserAchievements(FetchUserAchievementsHandler callback)
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x2352F70", Offset = "0x2352F70", VA = "0x2352F70")]
	public int CountUserAchievements()
	{
		return default(int);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x2352FC0", Offset = "0x2352FC0", VA = "0x2352FC0")]
	public UserAchievement GetUserAchievement(long userAchievementId)
	{
		return default(UserAchievement);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x2353070", Offset = "0x2353070", VA = "0x2353070")]
	public UserAchievement GetUserAchievementAt(int index)
	{
		return default(UserAchievement);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x2352600", Offset = "0x2352600", VA = "0x2352600")]
	[MonoPInvokeCallback]
	private static void OnUserAchievementUpdateImpl(IntPtr ptr, ref UserAchievement userAchievement)
	{
	}
}
