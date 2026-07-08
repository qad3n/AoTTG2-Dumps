using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x200024A")]
internal class MapTargetable : ITargetable
{
	[Token(Token = "0x4000CB2")]
	[FieldOffset(Offset = "0x10")]
	private Transform _transform;

	[Token(Token = "0x4000CB3")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 _center;

	[Token(Token = "0x17000179")]
	public GameObject GameObject
	{
		[Token(Token = "0x6000DAC")]
		[Address(RVA = "0x3CB0230", Offset = "0x3CB0230", VA = "0x3CB0230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017A")]
	public string Team
	{
		[Token(Token = "0x6000DAD")]
		[Address(RVA = "0x3CB0250", Offset = "0x3CB0250", VA = "0x3CB0250")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DAE")]
		[Address(RVA = "0x3CB0260", Offset = "0x3CB0260", VA = "0x3CB0260")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700017B")]
	public bool Enabled
	{
		[Token(Token = "0x6000DAF")]
		[Address(RVA = "0x3CB0270", Offset = "0x3CB0270", VA = "0x3CB0270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DB0")]
		[Address(RVA = "0x3CB0280", Offset = "0x3CB0280", VA = "0x3CB0280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x3CB0290", Offset = "0x3CB0290", VA = "0x3CB0290")]
	public MapTargetable(Transform transform, Vector3 center, string team)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x3CB0300", Offset = "0x3CB0300", VA = "0x3CB0300", Slot = "6")]
	public bool ValidTarget()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x3CB0360", Offset = "0x3CB0360", VA = "0x3CB0360", Slot = "5")]
	public Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x3CB0390", Offset = "0x3CB0390", VA = "0x3CB0390", Slot = "4")]
	public string GetTeam()
	{
		return null;
	}
}
