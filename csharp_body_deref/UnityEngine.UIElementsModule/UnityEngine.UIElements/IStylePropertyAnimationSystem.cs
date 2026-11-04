// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IStylePropertyAnimationSystem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using JetBrains.Annotations;
using UnityEngine.Bindings;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x200044F")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal interface IStylePropertyAnimationSystem
{
	[Token(Token = "0x600215F")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, float startValue, float endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002160")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, int startValue, int endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002161")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Length startValue, Length endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002162")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Color startValue, Color endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002163")]
	bool StartTransitionEnum(VisualElement owner, StylePropertyId prop, int startValue, int endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002164")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Background startValue, Background endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002165")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, FontDefinition startValue, FontDefinition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002166")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Font startValue, Font endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002167")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, TextShadow startValue, TextShadow endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002168")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Scale startValue, Scale endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002169")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, TransformOrigin startValue, TransformOrigin endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600216A")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Translate startValue, Translate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600216B")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Rotate startValue, Rotate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600216C")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, Ratio startValue, Ratio endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600216D")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundPosition startValue, BackgroundPosition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600216E")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundRepeat startValue, BackgroundRepeat endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x600216F")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundSize startValue, BackgroundSize endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002170")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, List<FilterFunction> startValue, List<FilterFunction> endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002171")]
	bool StartTransition(VisualElement owner, StylePropertyId prop, MaterialDefinition startValue, MaterialDefinition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve);

	[Token(Token = "0x6002172")]
	void CancelAllAnimations();

	[Token(Token = "0x6002173")]
	void CancelAllAnimations(VisualElement owner);

	[Token(Token = "0x6002174")]
	void CancelAnimation(VisualElement owner, StylePropertyId id);

	[Token(Token = "0x6002175")]
	void UpdateAnimation(VisualElement owner, StylePropertyId id);

	[Token(Token = "0x6002176")]
	void GetAllAnimations(VisualElement owner, List<StylePropertyId> propertyIds);

	[Token(Token = "0x6002177")]
	void Update(double updateTimeInSeconds);
}
