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
		[Address(RVA = "0x53D800", Offset = "0x53BE00", VA = "0x18053D800")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x14000016")]
	public event UserAchievementUpdateHandler OnUserAchievementUpdate
	{
		[Token(Token = "0x6000523")]
		[Address(RVA = "0x53D760", Offset = "0x53BD60", VA = "0x18053D760")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x53D920", Offset = "0x53BF20", VA = "0x18053D920")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x53D570", Offset = "0x53BB70", VA = "0x18053D570")]
	internal AchievementManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x53D0C0", Offset = "0x53B6C0", VA = "0x18053D0C0")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x53D310", Offset = "0x53B910", VA = "0x18053D310")]
	[MonoPInvokeCallback]
	private static void SetUserAchievementCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x53D420", Offset = "0x53BA20", VA = "0x18053D420")]
	public void SetUserAchievement(long achievementId, byte percentComplete, SetUserAchievementHandler callback)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x53CD20", Offset = "0x53B320", VA = "0x18053CD20")]
	[MonoPInvokeCallback]
	private static void FetchUserAchievementsCallbackImpl(IntPtr ptr, Result result)
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x53CE30", Offset = "0x53B430", VA = "0x18053CE30")]
	public void FetchUserAchievements(FetchUserAchievementsHandler callback)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x53CCD0", Offset = "0x53B2D0", VA = "0x18053CCD0")]
	public int CountUserAchievements()
	{
		return default(int);
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x53D010", Offset = "0x53B610", VA = "0x18053D010")]
	public UserAchievement GetUserAchievement(long userAchievementId)
	{
		return default(UserAchievement);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x53CF60", Offset = "0x53B560", VA = "0x18053CF60")]
	public UserAchievement GetUserAchievementAt(int index)
	{
		return default(UserAchievement);
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x53D1F0", Offset = "0x53B7F0", VA = "0x18053D1F0")]
	[MonoPInvokeCallback]
	private static void OnUserAchievementUpdateImpl(IntPtr ptr, ref UserAchievement userAchievement)
	{
	}
}
