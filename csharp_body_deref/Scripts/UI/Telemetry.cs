using System;
using System.Text;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000621")]
internal class Telemetry : MonoBehaviour
{
	[Token(Token = "0x4001E3D")]
	[FieldOffset(Offset = "0x20")]
	private MultiTextLabel timePanel;

	[Token(Token = "0x4001E3E")]
	[FieldOffset(Offset = "0x28")]
	private MultiTextLabel performancePanel;

	[Token(Token = "0x4001E3F")]
	[FieldOffset(Offset = "0x30")]
	private ElementStyle _style;

	[Token(Token = "0x4001E40")]
	[FieldOffset(Offset = "0x38")]
	private StringBuilder _sb;

	[Token(Token = "0x4001E41")]
	private const string _gameTimeFormat = "{0:0}";

	[Token(Token = "0x4001E42")]
	private const float MaxSyncDelay = 0.01f;

	[Token(Token = "0x4001E43")]
	[FieldOffset(Offset = "0x40")]
	private float _currentSyncDelay;

	[Token(Token = "0x6003E3E")]
	[Address(RVA = "0x3FD9AC0", Offset = "0x3FD9AC0", VA = "0x3FD9AC0")]
	public void Setup(ElementStyle _style)
	{
	}

	[Token(Token = "0x6003E3F")]
	[Address(RVA = "0x3FD9E30", Offset = "0x3FD9E30", VA = "0x3FD9E30")]
	private void Update()
	{
	}

	[Token(Token = "0x6003E40")]
	[Address(RVA = "0x3FD9E80", Offset = "0x3FD9E80", VA = "0x3FD9E80")]
	private void Sync()
	{
	}

	[Token(Token = "0x6003E41")]
	[Address(RVA = "0x3FDA370", Offset = "0x3FDA370", VA = "0x3FDA370")]
	private void UpdatePerformance()
	{
	}

	[Token(Token = "0x6003E42")]
	[Address(RVA = "0x3FDA020", Offset = "0x3FDA020", VA = "0x3FDA020")]
	private void UpdateGameTime(float currentTime)
	{
	}

	[Token(Token = "0x6003E43")]
	[Address(RVA = "0x3FDA110", Offset = "0x3FDA110", VA = "0x3FDA110")]
	private void UpdateSystemTime(DateTime dt)
	{
	}

	[Token(Token = "0x6003E44")]
	[Address(RVA = "0x3FDA7A0", Offset = "0x3FDA7A0", VA = "0x3FDA7A0")]
	public Telemetry()
	{
	}
}
