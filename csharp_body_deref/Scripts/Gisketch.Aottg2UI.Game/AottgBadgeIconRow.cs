using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000151")]
internal sealed class AottgBadgeIconRow : AottgComponent
{
	[Token(Token = "0x40007A5")]
	private const string NodeType = "AottgBadgeIconRow";

	[Token(Token = "0x40007A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _size;

	[Token(Token = "0x40007A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly float _gap;

	[Token(Token = "0x40007A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _stateKey;

	[Token(Token = "0x40007AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _visibleKey;

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x40C9910", Offset = "0x40C9910", VA = "0x40C9910")]
	static AottgBadgeIconRow()
	{
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x40C99D0", Offset = "0x40C99D0", VA = "0x40C99D0")]
	public AottgBadgeIconRow(string id, float size, [Optional][DefaultParameterValue(4f)] float gap, [Optional] string stateKey, [Optional] string visibleKey)
	{
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x40C9A50", Offset = "0x40C9A50", VA = "0x40C9A50", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x40C9C40", Offset = "0x40C9C40", VA = "0x40C9C40")]
	private static bool BuildRow(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}
