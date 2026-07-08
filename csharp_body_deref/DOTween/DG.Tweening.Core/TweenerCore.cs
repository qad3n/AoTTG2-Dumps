using System;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Core;

[Token(Token = "0x20000B9")]
public class TweenerCore<T1, T2, TPlugOptions> : Tweener where TPlugOptions : struct, IPlugOptions
{
	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x0")]
	public T2 startValue;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x0")]
	public T2 endValue;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x0")]
	public T2 changeValue;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x0")]
	public TPlugOptions plugOptions;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x0")]
	public DOGetter<T1> getter;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x0")]
	public DOSetter<T1> setter;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x0")]
	internal ABSTweenPlugin<T1, T2, TPlugOptions> tweenPlugin;

	[Token(Token = "0x4000255")]
	private const string _TxtCantChangeSequencedValues = "You cannot change the values of a tween contained inside a Sequence";

	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x0")]
	private Type _colorType;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x0")]
	private Type _color32Type;

	[Token(Token = "0x6000466")]
	internal TweenerCore()
	{
	}

	[Token(Token = "0x6000467")]
	public override Tweener ChangeStartValue(object newStartValue, float newDuration = -1f)
	{
		return null;
	}

	[Token(Token = "0x6000468")]
	public override Tweener ChangeEndValue(object newEndValue, bool snapStartValue)
	{
		return null;
	}

	[Token(Token = "0x6000469")]
	public override Tweener ChangeEndValue(object newEndValue, float newDuration = -1f, bool snapStartValue = false)
	{
		return null;
	}

	[Token(Token = "0x600046A")]
	public override Tweener ChangeValues(object newStartValue, object newEndValue, float newDuration = -1f)
	{
		return null;
	}

	[Token(Token = "0x600046B")]
	public TweenerCore<T1, T2, TPlugOptions> ChangeStartValue(T2 newStartValue, float newDuration = -1f)
	{
		return null;
	}

	[Token(Token = "0x600046C")]
	public TweenerCore<T1, T2, TPlugOptions> ChangeEndValue(T2 newEndValue, bool snapStartValue)
	{
		return null;
	}

	[Token(Token = "0x600046D")]
	public TweenerCore<T1, T2, TPlugOptions> ChangeEndValue(T2 newEndValue, float newDuration = -1f, bool snapStartValue = false)
	{
		return null;
	}

	[Token(Token = "0x600046E")]
	public TweenerCore<T1, T2, TPlugOptions> ChangeValues(T2 newStartValue, T2 newEndValue, float newDuration = -1f)
	{
		return null;
	}

	[Token(Token = "0x600046F")]
	internal override Tweener SetFrom(bool relative)
	{
		return null;
	}

	[Token(Token = "0x6000470")]
	internal Tweener SetFrom(T2 fromValue, bool setImmediately, bool relative)
	{
		return null;
	}

	[Token(Token = "0x6000471")]
	internal sealed override void Reset()
	{
	}

	[Token(Token = "0x6000472")]
	internal override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000473")]
	private bool ValidateChangeValueType(Type newType, out bool isColor32ToColor)
	{
		return default(bool);
	}

	[Token(Token = "0x6000474")]
	internal override float UpdateDelay(float elapsed)
	{
		return default(float);
	}

	[Token(Token = "0x6000475")]
	internal override bool Startup()
	{
		return default(bool);
	}

	[Token(Token = "0x6000476")]
	internal override bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode, UpdateNotice updateNotice)
	{
		return default(bool);
	}
}
