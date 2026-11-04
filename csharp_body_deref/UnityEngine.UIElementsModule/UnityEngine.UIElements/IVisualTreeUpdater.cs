// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IVisualTreeUpdater
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000563")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal interface IVisualTreeUpdater : IDisposable
{
	[Token(Token = "0x17000A41")]
	long FrameCount
	{
		[Token(Token = "0x600288F")]
		get;
		[Token(Token = "0x6002890")]
		set;
	}

	[Token(Token = "0x17000A42")]
	BaseVisualElementPanel panel
	{
		[Token(Token = "0x6002891")]
		set;
	}

	[Token(Token = "0x17000A43")]
	ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6002892")]
		get;
	}

	[Token(Token = "0x6002893")]
	void Update();

	[Token(Token = "0x6002894")]
	void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType);
}
