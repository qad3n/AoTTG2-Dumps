// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapTargetable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapTargetable.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapTargetable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x200042A")]
internal class MapTargetable : ITargetable
{
	[Token(Token = "0x400154F")]
	[FieldOffset(Offset = "0x10")]
	private Transform _transform;

	[Token(Token = "0x4001550")]
	[FieldOffset(Offset = "0x18")]
	private Vector3 _center;

	[Token(Token = "0x170002C6")]
	public GameObject GameObject
	{
		[Token(Token = "0x6001A45")]
		[Address(RVA = "0x58A6480", Offset = "0x58A5480", VA = "0x58A6480")]
		get
		{
			// Lifted from source/cpp/Map/MapTargetable.c (Map.MapTargetable$$get_GameObject): clean
			Transform __this_00;
			GameObject pUVar1;

			__this_00 = this._transform;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pUVar1;
		}
	}

	[Token(Token = "0x170002C7")]
	public string Team
	{
		[Token(Token = "0x6001A46")]
		[Address(RVA = "0x58A64A0", Offset = "0x58A54A0", VA = "0x58A64A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Map/MapTargetable.c (Map.MapTargetable$$get_Team): clean
			return this._Team_k__BackingField;
		}
		[Token(Token = "0x6001A47")]
		[Address(RVA = "0x58A64B0", Offset = "0x58A54B0", VA = "0x58A64B0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Map/MapTargetable.c (Map.MapTargetable$$set_Team): clean
			this._Team_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002C8")]
	public bool Enabled
	{
		[Token(Token = "0x6001A48")]
		[Address(RVA = "0x58A64C0", Offset = "0x58A54C0", VA = "0x58A64C0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Map/MapTargetable.c (Map.MapTargetable$$get_Enabled): clean
			return this._Enabled_k__BackingField;
		}
		[Token(Token = "0x6001A49")]
		[Address(RVA = "0x58A64D0", Offset = "0x58A54D0", VA = "0x58A64D0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Map/MapTargetable.c (Map.MapTargetable$$set_Enabled): clean
			this._Enabled_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x58A64E0", Offset = "0x58A54E0", VA = "0x58A64E0")]
	public MapTargetable(Transform transform, Vector3 center, string team)
	{
		// Lifted from source/cpp/Map/MapTargetable.c (Map.MapTargetable$$.ctor): clean
		this._Enabled_k__BackingField = true;
		base();
		this._transform = transform;
		this._center.x = center.x;
		this._center.y = center.y;
		this._center.z = center.z;
		this._Team_k__BackingField = team;
		return;
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x58A6550", Offset = "0x58A5550", VA = "0x58A6550", Slot = "6")]
	public bool ValidTarget()
	{
		// Lifted from source/cpp/Map/MapTargetable.c (Map.MapTargetable$$ValidTarget): clean
		Transform x;
		bool bVar1;

		if (this._Enabled_k__BackingField == false) {
			return false;
		}
		x = this._transform;
		bVar1 = ((Object)x != null);
		return bVar1;
	}

	[Token(Token = "0x6001A4C")]
	[Address(RVA = "0x58A65B0", Offset = "0x58A55B0", VA = "0x58A65B0", Slot = "5")]
	public Vector3 GetPosition()
	{
		// Lifted from source/cpp/Map/MapTargetable.c (Map.MapTargetable$$GetPosition): clean
		Transform __this_00;
		Vector3 UVar1;

		__this_00 = this._transform;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = (Vector3)__this_00.TransformPoint((Vector3)this._center);
		return (Vector3)UVar1;
	}

	[Token(Token = "0x6001A4D")]
	[Address(RVA = "0x58A65E0", Offset = "0x58A55E0", VA = "0x58A65E0", Slot = "4")]
	public string GetTeam()
	{
		// Lifted from source/cpp/Map/MapTargetable.c (Map.MapTargetable$$GetTeam): clean
		return this._Team_k__BackingField;
	}
}
