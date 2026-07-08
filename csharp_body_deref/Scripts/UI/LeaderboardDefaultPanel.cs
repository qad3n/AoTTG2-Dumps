using System.Runtime.InteropServices;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000648")]
internal class LeaderboardDefaultPanel : CategoryPanel
{
	[Token(Token = "0x17000C1E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003F5F")]
		[Address(RVA = "0x3FEE800", Offset = "0x3FEE800", VA = "0x3FEE800", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C1F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003F60")]
		[Address(RVA = "0x3FEE810", Offset = "0x3FEE810", VA = "0x3FEE810", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C20")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003F61")]
		[Address(RVA = "0x3FEE820", Offset = "0x3FEE820", VA = "0x3FEE820", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C21")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003F62")]
		[Address(RVA = "0x3FEE830", Offset = "0x3FEE830", VA = "0x3FEE830", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003F63")]
	[Address(RVA = "0x3FEE860", Offset = "0x3FEE860", VA = "0x3FEE860", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F64")]
	[Address(RVA = "0x3FF0E90", Offset = "0x3FF0E90", VA = "0x3FF0E90")]
	private void CreateRank(Transform parent, ElementStyle style, int rank)
	{
	}

	[Token(Token = "0x6003F65")]
	[Address(RVA = "0x3FF1100", Offset = "0x3FF1100", VA = "0x3FF1100")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003F66")]
	[Address(RVA = "0x3FF08E0", Offset = "0x3FF08E0", VA = "0x3FF08E0")]
	private string[] GetCategoryNames()
	{
		return null;
	}

	[Token(Token = "0x6003F67")]
	[Address(RVA = "0x3FF0BB0", Offset = "0x3FF0BB0", VA = "0x3FF0BB0")]
	private string[] GetSubcategoryNames(JSONNode category)
	{
		return null;
	}

	[Token(Token = "0x6003F68")]
	[Address(RVA = "0x3FF0510", Offset = "0x3FF0510", VA = "0x3FF0510")]
	private JSONNode FindCategory(string name)
	{
		return null;
	}

	[Token(Token = "0x6003F69")]
	[Address(RVA = "0x3FF06A0", Offset = "0x3FF06A0", VA = "0x3FF06A0")]
	private JSONNode FindSubcategory(JSONNode category, string subcategoryName)
	{
		return null;
	}

	[Token(Token = "0x6003F6A")]
	[Address(RVA = "0x3FF1110", Offset = "0x3FF1110", VA = "0x3FF1110")]
	public LeaderboardDefaultPanel()
	{
	}
}
