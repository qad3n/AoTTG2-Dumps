using System.Runtime.InteropServices;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening;

[Token(Token = "0x2000070")]
public abstract class Tweener : Tween
{
	[Token(Token = "0x400014D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	internal bool hasManuallySetStartValue;

	[Token(Token = "0x400014E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x121")]
	internal bool isFromAllowed;

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x2309DA0", Offset = "0x2309DA0", VA = "0x2309DA0")]
	internal Tweener()
	{
	}

	[Token(Token = "0x60002B0")]
	public abstract Tweener ChangeStartValue(object newStartValue, float newDuration = -1f);

	[Token(Token = "0x60002B1")]
	public abstract Tweener ChangeEndValue(object newEndValue, float newDuration = -1f, bool snapStartValue = false);

	[Token(Token = "0x60002B2")]
	public abstract Tweener ChangeEndValue(object newEndValue, bool snapStartValue);

	[Token(Token = "0x60002B3")]
	public abstract Tweener ChangeValues(object newStartValue, object newEndValue, float newDuration = -1f);

	[Token(Token = "0x60002B4")]
	internal abstract Tweener SetFrom(bool relative);

	[Token(Token = "0x60002B5")]
	internal static bool Setup<T1, T2, TPlugOptions>(TweenerCore<T1, T2, TPlugOptions> t, DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration, [Optional] ABSTweenPlugin<T1, T2, TPlugOptions> plugin) where TPlugOptions : struct, IPlugOptions
	{
		return default(bool);
	}

	[Token(Token = "0x60002B6")]
	internal static float DoUpdateDelay<T1, T2, TPlugOptions>(TweenerCore<T1, T2, TPlugOptions> t, float elapsed) where TPlugOptions : struct, IPlugOptions
	{
		return default(float);
	}

	[Token(Token = "0x60002B7")]
	internal static bool DoStartup<T1, T2, TPlugOptions>(TweenerCore<T1, T2, TPlugOptions> t) where TPlugOptions : struct, IPlugOptions
	{
		return default(bool);
	}

	[Token(Token = "0x60002B8")]
	internal static TweenerCore<T1, T2, TPlugOptions> DoChangeStartValue<T1, T2, TPlugOptions>(TweenerCore<T1, T2, TPlugOptions> t, T2 newStartValue, float newDuration) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x60002B9")]
	internal static TweenerCore<T1, T2, TPlugOptions> DoChangeEndValue<T1, T2, TPlugOptions>(TweenerCore<T1, T2, TPlugOptions> t, T2 newEndValue, float newDuration, bool snapStartValue) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	internal static TweenerCore<T1, T2, TPlugOptions> DoChangeValues<T1, T2, TPlugOptions>(TweenerCore<T1, T2, TPlugOptions> t, T2 newStartValue, T2 newEndValue, float newDuration) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x60002BB")]
	private static bool DOStartupSpecials<T1, T2, TPlugOptions>(TweenerCore<T1, T2, TPlugOptions> t) where TPlugOptions : struct, IPlugOptions
	{
		return default(bool);
	}

	[Token(Token = "0x60002BC")]
	private static void DOStartupDurationBased<T1, T2, TPlugOptions>(TweenerCore<T1, T2, TPlugOptions> t) where TPlugOptions : struct, IPlugOptions
	{
	}
}
