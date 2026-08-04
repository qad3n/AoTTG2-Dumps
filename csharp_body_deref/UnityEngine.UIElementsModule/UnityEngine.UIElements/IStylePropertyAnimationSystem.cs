// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IStylePropertyAnimationSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using JetBrains.Annotations;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003AA")]
internal interface IStylePropertyAnimationSystem
{
	[Token(Token = "0x600174D")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, float startValue, float endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600174E")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, int startValue, int endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600174F")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Length startValue, Length endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001750")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Color startValue, Color endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001751")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Background startValue, Background endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001752")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, FontDefinition startValue, FontDefinition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001753")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Font startValue, Font endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001754")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, TextShadow startValue, TextShadow endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001755")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Scale startValue, Scale endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001756")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, TransformOrigin startValue, TransformOrigin endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001757")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Translate startValue, Translate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001758")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Rotate startValue, Rotate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6001759")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundPosition startValue, BackgroundPosition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600175A")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundRepeat startValue, BackgroundRepeat endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600175B")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundSize startValue, BackgroundSize endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600175C")]
	void CancelAllAnimations();

	[Token(Token = "0x600175D")]
	void CancelAllAnimations(VisualElement owner);

	[Token(Token = "0x600175E")]
	void CancelAnimation(VisualElement owner, StylePropertyId id);

	[Token(Token = "0x600175F")]
	void UpdateAnimation(VisualElement owner, StylePropertyId id);

	[Token(Token = "0x6001760")]
	void GetAllAnimations(VisualElement owner, List<StylePropertyId> propertyIds);

	[Token(Token = "0x6001761")]
	void Update();
}
