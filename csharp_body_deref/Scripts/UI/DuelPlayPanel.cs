using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000636")]
internal class DuelPlayPanel : DuelCategoryPanel
{
	[Token(Token = "0x4001EA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private List<Transform> _rows;

	[Token(Token = "0x4001EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _header;

	[Token(Token = "0x4001EAB")]
	private const float MaxSyncDelay = 0.2f;

	[Token(Token = "0x4001EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private float _currentSyncDelay;

	[Token(Token = "0x17000C01")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003EE4")]
		[Address(RVA = "0x3FE68B0", Offset = "0x3FE68B0", VA = "0x3FE68B0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C02")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003EE5")]
		[Address(RVA = "0x3FE68C0", Offset = "0x3FE68C0", VA = "0x3FE68C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003EE6")]
	[Address(RVA = "0x3FE68D0", Offset = "0x3FE68D0", VA = "0x3FE68D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003EE7")]
	[Address(RVA = "0x3FE68E0", Offset = "0x3FE68E0", VA = "0x3FE68E0")]
	public void Sync()
	{
	}

	[Token(Token = "0x6003EE8")]
	[Address(RVA = "0x3FE68F0", Offset = "0x3FE68F0", VA = "0x3FE68F0")]
	public DuelPlayPanel()
	{
	}
}
