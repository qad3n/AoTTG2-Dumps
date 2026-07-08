using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Search;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000098")]
public class GisketchView
{
	[Token(Token = "0x400030A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Dictionary<string, GameObject> _elements;

	[Token(Token = "0x1700006D")]
	public GameObject Root
	{
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x3A1D310", Offset = "0x3A1D310", VA = "0x3A1D310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x3A1D320", Offset = "0x3A1D320", VA = "0x3A1D320")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public List<GisketchMotionTarget> MotionTargets
	{
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x3A1D330", Offset = "0x3A1D330", VA = "0x3A1D330")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006F")]
	public List<GisketchSearchEntry> SearchEntries
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x3A1D340", Offset = "0x3A1D340", VA = "0x3A1D340")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x3A1D350", Offset = "0x3A1D350", VA = "0x3A1D350")]
	public void SetRoot(GameObject root)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x3A1D360", Offset = "0x3A1D360", VA = "0x3A1D360")]
	public void Register(GisketchNodeDefinition node, GameObject go, [Optional] GisketchMotionDefinition styleMotion)
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x3A1D9A0", Offset = "0x3A1D9A0", VA = "0x3A1D9A0")]
	public GameObject Find(string id)
	{
		return null;
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x3A1D660", Offset = "0x3A1D660", VA = "0x3A1D660")]
	private static bool IsSearchable(GisketchNodeDefinition node, GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x3A1D7F0", Offset = "0x3A1D7F0", VA = "0x3A1D7F0")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x3A1D7C0", Offset = "0x3A1D7C0", VA = "0x3A1D7C0")]
	private static bool HasVisibleBinding(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x3A1DA30", Offset = "0x3A1DA30", VA = "0x3A1DA30")]
	public GisketchView()
	{
	}
}
