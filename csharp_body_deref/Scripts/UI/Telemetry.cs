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

[Token(Token = "0x20007C8")]
internal class Telemetry : MonoBehaviour
{
	[Token(Token = "0x400275F")]
	[FieldOffset(Offset = "0x20")]
	private MultiTextLabel timePanel;

	[Token(Token = "0x4002760")]
	[FieldOffset(Offset = "0x28")]
	private MultiTextLabel performancePanel;

	[Token(Token = "0x4002761")]
	[FieldOffset(Offset = "0x30")]
	private ElementStyle _style;

	[Token(Token = "0x4002762")]
	[FieldOffset(Offset = "0x38")]
	private StringBuilder _sb;

	[Token(Token = "0x4002763")]
	private const string _gameTimeFormat = "{0:0}";

	[Token(Token = "0x4002764")]
	private const float MaxSyncDelay = 0.01f;

	[Token(Token = "0x4002765")]
	[FieldOffset(Offset = "0x40")]
	private float _currentSyncDelay;

	[Token(Token = "0x6004B88")]
	[Address(RVA = "0x2281990", Offset = "0x227FF90", VA = "0x182281990")]
	public void Setup(ElementStyle _style)
	{
	}

	[Token(Token = "0x6004B89")]
	[Address(RVA = "0x2282760", Offset = "0x2280D60", VA = "0x182282760")]
	private void Update()
	{
	}

	[Token(Token = "0x6004B8A")]
	[Address(RVA = "0x2281DA0", Offset = "0x22803A0", VA = "0x182281DA0")]
	private void Sync()
	{
	}

	[Token(Token = "0x6004B8B")]
	[Address(RVA = "0x2282120", Offset = "0x2280720", VA = "0x182282120")]
	private void UpdatePerformance()
	{
	}

	[Token(Token = "0x6004B8C")]
	[Address(RVA = "0x2282030", Offset = "0x2280630", VA = "0x182282030")]
	private void UpdateGameTime(float currentTime)
	{
	}

	[Token(Token = "0x6004B8D")]
	[Address(RVA = "0x22824E0", Offset = "0x2280AE0", VA = "0x1822824E0")]
	private void UpdateSystemTime(DateTime dt)
	{
	}

	[Token(Token = "0x6004B8E")]
	[Address(RVA = "0x22827A0", Offset = "0x2280DA0", VA = "0x1822827A0")]
	public Telemetry()
	{
	}
}
