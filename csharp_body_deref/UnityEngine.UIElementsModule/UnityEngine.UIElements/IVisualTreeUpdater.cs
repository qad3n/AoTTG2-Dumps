using System;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000488")]
internal interface IVisualTreeUpdater : IDisposable
{
	[Token(Token = "0x17000759")]
	BaseVisualElementPanel panel
	{
		[Token(Token = "0x6001C1D")]
		set;
	}

	[Token(Token = "0x1700075A")]
	ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6001C1E")]
		get;
	}

	[Token(Token = "0x6001C1F")]
	void Update();

	[Token(Token = "0x6001C20")]
	void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType);
}
