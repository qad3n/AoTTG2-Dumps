using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000618")]
internal class ScoreboardScorePanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x4001E0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private List<Transform> _rows;

	[Token(Token = "0x4001E0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _header;

	[Token(Token = "0x4001E10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Player[] _lastPlayers;

	[Token(Token = "0x4001E11")]
	private const float MaxSyncDelay = 1f;

	[Token(Token = "0x4001E12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private float _currentSyncDelay;

	[Token(Token = "0x17000BBD")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003DF0")]
		[Address(RVA = "0x3FD4910", Offset = "0x3FD4910", VA = "0x3FD4910", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BBE")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003DF1")]
		[Address(RVA = "0x3FD4920", Offset = "0x3FD4920", VA = "0x3FD4920", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003DF2")]
	[Address(RVA = "0x3FD4930", Offset = "0x3FD4930", VA = "0x3FD4930", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003DF3")]
	[Address(RVA = "0x3FD4950", Offset = "0x3FD4950", VA = "0x3FD4950")]
	private void Update()
	{
	}

	[Token(Token = "0x6003DF4")]
	[Address(RVA = "0x3FD2440", Offset = "0x3FD2440", VA = "0x3FD2440")]
	public void Sync()
	{
	}

	[Token(Token = "0x6003DF5")]
	[Address(RVA = "0x3FD5030", Offset = "0x3FD5030", VA = "0x3FD5030")]
	private void SetRows(ElementStyle style)
	{
	}

	[Token(Token = "0x6003DF6")]
	[Address(RVA = "0x3FD49A0", Offset = "0x3FD49A0", VA = "0x3FD49A0")]
	private void SetHeader(ElementStyle style, int currentPlayers, int maxPlayers)
	{
	}

	[Token(Token = "0x6003DF7")]
	[Address(RVA = "0x3FD52B0", Offset = "0x3FD52B0", VA = "0x3FD52B0")]
	private Transform CreateRow(ElementStyle style, int index)
	{
		return null;
	}

	[Token(Token = "0x6003DF8")]
	[Address(RVA = "0x3FD57B0", Offset = "0x3FD57B0", VA = "0x3FD57B0")]
	private void SetRow(Transform row, Player player)
	{
	}

	[Token(Token = "0x6003DF9")]
	[Address(RVA = "0x3FD6C20", Offset = "0x3FD6C20", VA = "0x3FD6C20")]
	private void OnClickProfile(int index)
	{
	}

	[Token(Token = "0x6003DFA")]
	[Address(RVA = "0x3FD6CC0", Offset = "0x3FD6CC0", VA = "0x3FD6CC0")]
	private void OnClickKick(int index)
	{
	}

	[Token(Token = "0x6003DFB")]
	[Address(RVA = "0x3FD6E10", Offset = "0x3FD6E10", VA = "0x3FD6E10")]
	private void FinishKickPlayer(Player player)
	{
	}

	[Token(Token = "0x6003DFC")]
	[Address(RVA = "0x3FD6E80", Offset = "0x3FD6E80", VA = "0x3FD6E80")]
	private void OnClickMute(int index)
	{
	}

	[Token(Token = "0x6003DFD")]
	[Address(RVA = "0x3FD6F20", Offset = "0x3FD6F20", VA = "0x3FD6F20")]
	public ScoreboardScorePanel()
	{
	}
}
