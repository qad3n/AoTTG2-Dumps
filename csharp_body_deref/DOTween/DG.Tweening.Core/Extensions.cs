using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Core;

[Token(Token = "0x20000B0")]
public static class Extensions
{
	[Token(Token = "0x6000420")]
	public static T SetSpecialStartupMode<T>(this T t, SpecialStartupMode mode) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	public static TweenerCore<T1, T2, TPlugOptions> Blendable<T1, T2, TPlugOptions>(this TweenerCore<T1, T2, TPlugOptions> t) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	public static TweenerCore<T1, T2, TPlugOptions> NoFrom<T1, T2, TPlugOptions>(this TweenerCore<T1, T2, TPlugOptions> t) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}
}
