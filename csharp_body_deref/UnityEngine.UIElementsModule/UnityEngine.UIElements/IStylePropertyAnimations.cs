// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IStylePropertyAnimations
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x200044E")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal interface IStylePropertyAnimations
{
	[Token(Token = "0x17000905")]
	int runningAnimationCount
	{
		[Token(Token = "0x600215B")]
		get;
		[Token(Token = "0x600215C")]
		set;
	}

	[Token(Token = "0x17000906")]
	int completedAnimationCount
	{
		[Token(Token = "0x600215D")]
		get;
		[Token(Token = "0x600215E")]
		set;
	}

	[Token(Token = "0x6002144")]
	bool Start(StylePropertyId id, float from, float to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002145")]
	bool Start(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002146")]
	bool Start(StylePropertyId id, Length from, Length to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002147")]
	bool Start(StylePropertyId id, Color from, Color to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002148")]
	bool StartEnum(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002149")]
	bool Start(StylePropertyId id, Background from, Background to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600214A")]
	bool Start(StylePropertyId id, FontDefinition from, FontDefinition to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600214B")]
	bool Start(StylePropertyId id, Font from, Font to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600214C")]
	bool Start(StylePropertyId id, TextShadow from, TextShadow to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600214D")]
	bool Start(StylePropertyId id, Scale from, Scale to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600214E")]
	bool Start(StylePropertyId id, Translate from, Translate to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x600214F")]
	bool Start(StylePropertyId id, Rotate from, Rotate to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002150")]
	bool Start(StylePropertyId id, Ratio from, Ratio to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002151")]
	bool Start(StylePropertyId id, TransformOrigin from, TransformOrigin to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002152")]
	bool Start(StylePropertyId id, BackgroundPosition from, BackgroundPosition to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002153")]
	bool Start(StylePropertyId id, BackgroundRepeat from, BackgroundRepeat to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002154")]
	bool Start(StylePropertyId id, BackgroundSize from, BackgroundSize to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002155")]
	bool Start(StylePropertyId id, List<FilterFunction> from, List<FilterFunction> to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002156")]
	bool Start(StylePropertyId id, MaterialDefinition from, MaterialDefinition to, int durationMs, int delayMs, Func<float, float> easingCurve);

	[Token(Token = "0x6002157")]
	void UpdateAnimation(StylePropertyId id);

	[Token(Token = "0x6002158")]
	void GetAllAnimations(List<StylePropertyId> outPropertyIds);

	[Token(Token = "0x6002159")]
	void CancelAnimation(StylePropertyId id);

	[Token(Token = "0x600215A")]
	void CancelAllAnimations();
}
