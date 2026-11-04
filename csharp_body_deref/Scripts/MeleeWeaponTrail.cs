// ==================== AoTTG2 cross-reference ====================
// Type: MeleeWeaponTrail
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MeleeWeaponTrail.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/MeleeWeaponTrail.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000021")]
public class MeleeWeaponTrail : MonoBehaviour
{
	[Serializable]
	[Token(Token = "0x2000022")]
	public class Point
	{
		[Token(Token = "0x40000C3")]
		[FieldOffset(Offset = "0x10")]
		public float timeCreated;

		[Token(Token = "0x40000C4")]
		[FieldOffset(Offset = "0x14")]
		public Vector3 basePosition;

		[Token(Token = "0x40000C5")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 tipPosition;

		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Point()
		{
		}
	}

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool _emit;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x21")]
	private bool _use;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	public float _emitTime;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	public Material _material;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float _lifeTime;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private Color[] _colors;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float[] _sizes;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private float _minVertexDistance;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private float _maxVertexDistance;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x50")]
	private float _minVertexDistanceSqr;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x54")]
	private float _maxVertexDistanceSqr;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private float _maxAngle;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private bool _autoDestruct;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private int subdivisions;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private Transform _base;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private Transform _tip;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x78")]
	private List<Point> _points;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x80")]
	private List<Point> _smoothedPoints;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x88")]
	private GameObject _trailObject;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x90")]
	private Mesh _trailMesh;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x98")]
	private Vector3 _lastPosition;

	[Token(Token = "0x17000012")]
	public bool Emit
	{
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public bool Use
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x1991EB0", Offset = "0x19904B0", VA = "0x181991EB0")]
		set
		{
		}
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x1DA4200", Offset = "0x1DA2800", VA = "0x181DA4200")]
	private void Start()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x1DA4030", Offset = "0x1DA2630", VA = "0x181DA4030")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x1DA4140", Offset = "0x1DA2740", VA = "0x181DA4140")]
	public void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x1DA45C0", Offset = "0x1DA2BC0", VA = "0x181DA45C0")]
	public void StopImmediate()
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x1DA4660", Offset = "0x1DA2C60", VA = "0x181DA4660")]
	private void Update()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x1DA4080", Offset = "0x1DA2680", VA = "0x181DA4080")]
	private void RemoveOldPoints(List<Point> pointList)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x1DA5C70", Offset = "0x1DA4270", VA = "0x181DA5C70")]
	public MeleeWeaponTrail()
	{
	}
}
