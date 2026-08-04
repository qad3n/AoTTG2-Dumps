// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IStylePropertyAnimations
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003A9")]
internal interface IStylePropertyAnimations
{
	[Token(Token = "0x17000665")]
	int runningAnimationCount
	{
		[Token(Token = "0x6001749")]
		get;
		[Token(Token = "0x600174A")]
		set;
	}

	[Token(Token = "0x17000666")]
	int completedAnimationCount
	{
		[Token(Token = "0x600174B")]
		get;
		[Token(Token = "0x600174C")]
		set;
	}

	[Token(Token = "0x6001735")]
	bool Start(StylePropertyId id, float from, float to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001736")]
	bool Start(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001737")]
	bool Start(StylePropertyId id, Length from, Length to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001738")]
	bool Start(StylePropertyId id, Color from, Color to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001739")]
	bool StartEnum(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600173A")]
	bool Start(StylePropertyId id, Background from, Background to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600173B")]
	bool Start(StylePropertyId id, FontDefinition from, FontDefinition to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600173C")]
	bool Start(StylePropertyId id, Font from, Font to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600173D")]
	bool Start(StylePropertyId id, TextShadow from, TextShadow to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600173E")]
	bool Start(StylePropertyId id, Scale from, Scale to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600173F")]
	bool Start(StylePropertyId id, Translate from, Translate to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001740")]
	bool Start(StylePropertyId id, Rotate from, Rotate to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001741")]
	bool Start(StylePropertyId id, TransformOrigin from, TransformOrigin to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001742")]
	bool Start(StylePropertyId id, BackgroundPosition from, BackgroundPosition to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001743")]
	bool Start(StylePropertyId id, BackgroundRepeat from, BackgroundRepeat to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001744")]
	bool Start(StylePropertyId id, BackgroundSize from, BackgroundSize to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6001745")]
	void UpdateAnimation(StylePropertyId id);

	[Token(Token = "0x6001746")]
	void GetAllAnimations(List<StylePropertyId> outPropertyIds);

	[Token(Token = "0x6001747")]
	void CancelAnimation(StylePropertyId id);

	[Token(Token = "0x6001748")]
	void CancelAllAnimations();
}
