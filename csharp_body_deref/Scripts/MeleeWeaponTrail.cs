// ==================== AoTTG2 cross-reference ====================
// Type: MeleeWeaponTrail
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MeleeWeaponTrail.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/MeleeWeaponTrail.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000021")]
public class MeleeWeaponTrail : MonoBehaviour
{
	[Token(Token = "0x2000022")]
	private struct Point
	{
		[Token(Token = "0x40000CB")]
		[FieldOffset(Offset = "0x0")]
		public float timeCreated;

		[Token(Token = "0x40000CC")]
		[FieldOffset(Offset = "0x4")]
		public Vector3 basePosition;

		[Token(Token = "0x40000CD")]
		[FieldOffset(Offset = "0x10")]
		public Vector3 tipPosition;
	}

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool _emit;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x21")]
	private bool _use;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	public float _emitTime;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	public Material _material;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float _lifeTime;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private Color[] _colors;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float[] _sizes;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private float _minVertexDistance;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private float _maxVertexDistance;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x50")]
	private float _minVertexDistanceSqr;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x54")]
	private float _maxVertexDistanceSqr;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private float _maxAngle;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private bool _autoDestruct;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private int subdivisions;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private Transform _base;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private Transform _tip;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x78")]
	private readonly List<Point> _points;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x80")]
	private readonly List<Point> _smoothedPoints;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x88")]
	private readonly List<Vector3> _vertices;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x90")]
	private readonly List<Color> _vertexColors;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x98")]
	private readonly List<Vector2> _uvs;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<int> _triangles;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0xA8")]
	private GameObject _trailObject;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0xB0")]
	private Renderer _trailRenderer;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0xB8")]
	private Mesh _trailMesh;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0xC0")]
	private bool _meshHasData;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0xC4")]
	private Vector3 _lastPosition;

	[Token(Token = "0x17000012")]
	public bool Emit
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x574B9A0", Offset = "0x574A9A0", VA = "0x574B9A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public bool Use
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x574B9B0", Offset = "0x574A9B0", VA = "0x574B9B0")]
		set
		{
		}
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x574B9C0", Offset = "0x574A9C0", VA = "0x574B9C0")]
	private void Start()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x574BD20", Offset = "0x574AD20", VA = "0x574BD20")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x574BD90", Offset = "0x574AD90", VA = "0x574BD90")]
	public void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x574BE20", Offset = "0x574AE20", VA = "0x574BE20")]
	public void StopImmediate()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x574BE80", Offset = "0x574AE80", VA = "0x574BE80")]
	private void Update()
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x574C1C0", Offset = "0x574B1C0", VA = "0x574C1C0")]
	private bool ShouldAddPoint(float distanceSqr)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x574C4B0", Offset = "0x574B4B0", VA = "0x574C4B0")]
	private void AddPoint()
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x574D270", Offset = "0x574C270", VA = "0x574D270")]
	private void SmoothLastSegments()
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x574D480", Offset = "0x574C480", VA = "0x574D480")]
	private Point SampleSegment(int first, int segment, int step, int stepCount)
	{
		return default(Point);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x574C740", Offset = "0x574B740", VA = "0x574C740")]
	private void UpdateLastPoint()
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x574D770", Offset = "0x574C770", VA = "0x574D770")]
	private void SetLastPosition(List<Point> pointList)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x574C8B0", Offset = "0x574B8B0", VA = "0x574C8B0")]
	private void RebuildMesh()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x574DA90", Offset = "0x574CA90", VA = "0x574DA90")]
	private static void GetSampleRange(int length, float time, out int min, out int max, out float lerp)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x574D880", Offset = "0x574C880", VA = "0x574D880")]
	private static Color Sample(Color[] values, float time)
	{
		return default(Color);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x574D990", Offset = "0x574C990", VA = "0x574D990")]
	private static float Sample(float[] values, float time)
	{
		return default(float);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x574C760", Offset = "0x574B760", VA = "0x574C760")]
	private void RemoveOldPoints(List<Point> pointList)
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x574DB60", Offset = "0x574CB60", VA = "0x574DB60")]
	public MeleeWeaponTrail()
	{
	}
}
