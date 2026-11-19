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

[Token(Token = "0x2000874")]
internal class Telemetry : MonoBehaviour
{
	[Token(Token = "0x4002ADF")]
	[FieldOffset(Offset = "0x20")]
	private MultiTextLabel timePanel;

	[Token(Token = "0x4002AE0")]
	[FieldOffset(Offset = "0x28")]
	private MultiTextLabel performancePanel;

	[Token(Token = "0x4002AE1")]
	[FieldOffset(Offset = "0x30")]
	private ElementStyle _style;

	[Token(Token = "0x4002AE2")]
	[FieldOffset(Offset = "0x38")]
	private StringBuilder _sb;

	[Token(Token = "0x4002AE3")]
	private const string _gameTimeFormat = "{0:0}";

	[Token(Token = "0x4002AE4")]
	private const float MaxSyncDelay = 0.01f;

	[Token(Token = "0x4002AE5")]
	[FieldOffset(Offset = "0x40")]
	private float _currentSyncDelay;

	[Token(Token = "0x60050A8")]
	[Address(RVA = "0x5C52420", Offset = "0x5C51420", VA = "0x5C52420")]
	public void Setup(ElementStyle _style)
	{
	}

	[Token(Token = "0x60050A9")]
	[Address(RVA = "0x5C52830", Offset = "0x5C51830", VA = "0x5C52830")]
	private void Update()
	{
	}

	[Token(Token = "0x60050AA")]
	[Address(RVA = "0x5C52880", Offset = "0x5C51880", VA = "0x5C52880")]
	private void Sync()
	{
	}

	[Token(Token = "0x60050AB")]
	[Address(RVA = "0x5C52D70", Offset = "0x5C51D70", VA = "0x5C52D70")]
	private void UpdatePerformance()
	{
	}

	[Token(Token = "0x60050AC")]
	[Address(RVA = "0x5C52A30", Offset = "0x5C51A30", VA = "0x5C52A30")]
	private void UpdateGameTime(float currentTime)
	{
	}

	[Token(Token = "0x60050AD")]
	[Address(RVA = "0x5C52B20", Offset = "0x5C51B20", VA = "0x5C52B20")]
	private void UpdateSystemTime(DateTime dt)
	{
	}

	[Token(Token = "0x60050AE")]
	[Address(RVA = "0x5C531B0", Offset = "0x5C521B0", VA = "0x5C531B0")]
	public Telemetry()
	{
	}
}
