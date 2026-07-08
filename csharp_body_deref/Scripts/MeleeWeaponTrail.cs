using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x200001F")]
public class MeleeWeaponTrail : MonoBehaviour
{
	[Serializable]
	[Token(Token = "0x2000020")]
	public class Point
	{
		[Token(Token = "0x40000B3")]
		[FieldOffset(Offset = "0x10")]
		public float timeCreated;

		[Token(Token = "0x40000B4")]
		[FieldOffset(Offset = "0x14")]
		public Vector3 basePosition;

		[Token(Token = "0x40000B5")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 tipPosition;

		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x3C6E170", Offset = "0x3C6E170", VA = "0x3C6E170")]
		public Point()
		{
		}
	}

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool _emit;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x21")]
	private bool _use;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	public float _emitTime;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	public Material _material;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float _lifeTime;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private Color[] _colors;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float[] _sizes;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private float _minVertexDistance;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private float _maxVertexDistance;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x50")]
	private float _minVertexDistanceSqr;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x54")]
	private float _maxVertexDistanceSqr;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private float _maxAngle;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private bool _autoDestruct;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private int subdivisions;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private Transform _base;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private Transform _tip;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x78")]
	private List<Point> _points;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x80")]
	private List<Point> _smoothedPoints;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x88")]
	private GameObject _trailObject;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x90")]
	private Mesh _trailMesh;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x98")]
	private Vector3 _lastPosition;

	[Token(Token = "0x17000010")]
	public bool Emit
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x3C6C4F0", Offset = "0x3C6C4F0", VA = "0x3C6C4F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool Use
	{
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x3C6C500", Offset = "0x3C6C500", VA = "0x3C6C500")]
		set
		{
		}
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3C6C510", Offset = "0x3C6C510", VA = "0x3C6C510")]
	private void Start()
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3C6C8B0", Offset = "0x3C6C8B0", VA = "0x3C6C8B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3C6C910", Offset = "0x3C6C910", VA = "0x3C6C910")]
	public void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3C6C9C0", Offset = "0x3C6C9C0", VA = "0x3C6C9C0")]
	public void StopImmediate()
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3C6CA50", Offset = "0x3C6CA50", VA = "0x3C6CA50")]
	private void Update()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3C6E180", Offset = "0x3C6E180", VA = "0x3C6E180")]
	private void RemoveOldPoints(List<Point> pointList)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3C6E250", Offset = "0x3C6E250", VA = "0x3C6E250")]
	public MeleeWeaponTrail()
	{
	}
}
