using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins.Core;

[Token(Token = "0x2000097")]
public abstract class ABSTweenPlugin<T1, T2, TPlugOptions> : ITweenPlugin where TPlugOptions : struct, IPlugOptions
{
	[Token(Token = "0x6000383")]
	public abstract void Reset(TweenerCore<T1, T2, TPlugOptions> t);

	[Token(Token = "0x6000384")]
	public abstract void SetFrom(TweenerCore<T1, T2, TPlugOptions> t, bool isRelative);

	[Token(Token = "0x6000385")]
	public abstract void SetFrom(TweenerCore<T1, T2, TPlugOptions> t, T2 fromValue, bool setImmediately, bool isRelative);

	[Token(Token = "0x6000386")]
	public abstract T2 ConvertToStartValue(TweenerCore<T1, T2, TPlugOptions> t, T1 value);

	[Token(Token = "0x6000387")]
	public abstract void SetRelativeEndValue(TweenerCore<T1, T2, TPlugOptions> t);

	[Token(Token = "0x6000388")]
	public abstract void SetChangeValue(TweenerCore<T1, T2, TPlugOptions> t);

	[Token(Token = "0x6000389")]
	public abstract float GetSpeedBasedDuration(TPlugOptions options, float unitsXSecond, T2 changeValue);

	[Token(Token = "0x600038A")]
	public abstract void EvaluateAndApply(TPlugOptions options, Tween t, bool isRelative, DOGetter<T1> getter, DOSetter<T1> setter, float elapsed, T2 startValue, T2 changeValue, float duration, bool usingInversePosition, int newCompletedSteps, UpdateNotice updateNotice);

	[Token(Token = "0x600038B")]
	protected ABSTweenPlugin()
	{
	}
}
