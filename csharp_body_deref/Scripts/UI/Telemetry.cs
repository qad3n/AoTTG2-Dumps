// ==================== AoTTG2 cross-reference ====================
// Type: UI.Telemetry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/Telemetry.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/Telemetry.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Text;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200066C")]
internal class Telemetry : MonoBehaviour
{
	[Token(Token = "0x4001F84")]
	[FieldOffset(Offset = "0x20")]
	private MultiTextLabel timePanel;

	[Token(Token = "0x4001F85")]
	[FieldOffset(Offset = "0x28")]
	private MultiTextLabel performancePanel;

	[Token(Token = "0x4001F86")]
	[FieldOffset(Offset = "0x30")]
	private ElementStyle _style;

	[Token(Token = "0x4001F87")]
	[FieldOffset(Offset = "0x38")]
	private StringBuilder _sb;

	[Token(Token = "0x4001F88")]
	private const string _gameTimeFormat = "{0:0}";

	[Token(Token = "0x4001F89")]
	private const float MaxSyncDelay = 0.01f;

	[Token(Token = "0x4001F8A")]
	[FieldOffset(Offset = "0x40")]
	private float _currentSyncDelay;

	[Token(Token = "0x600408B")]
	[Address(RVA = "0x42EC4E0", Offset = "0x42EC4E0", VA = "0x42EC4E0")]
	public void Setup(ElementStyle _style)
	{
	}

	[Token(Token = "0x600408C")]
	[Address(RVA = "0x42EC850", Offset = "0x42EC850", VA = "0x42EC850")]
	private void Update()
	{
	}

	[Token(Token = "0x600408D")]
	[Address(RVA = "0x42EC8A0", Offset = "0x42EC8A0", VA = "0x42EC8A0")]
	private void Sync()
	{
	}

	[Token(Token = "0x600408E")]
	[Address(RVA = "0x42ECD90", Offset = "0x42ECD90", VA = "0x42ECD90")]
	private void UpdatePerformance()
	{
	}

	[Token(Token = "0x600408F")]
	[Address(RVA = "0x42ECA40", Offset = "0x42ECA40", VA = "0x42ECA40")]
	private void UpdateGameTime(float currentTime)
	{
	}

	[Token(Token = "0x6004090")]
	[Address(RVA = "0x42ECB30", Offset = "0x42ECB30", VA = "0x42ECB30")]
	private void UpdateSystemTime(DateTime dt)
	{
	}

	[Token(Token = "0x6004091")]
	[Address(RVA = "0x42ED1C0", Offset = "0x42ED1C0", VA = "0x42ED1C0")]
	public Telemetry()
	{
	}
}
