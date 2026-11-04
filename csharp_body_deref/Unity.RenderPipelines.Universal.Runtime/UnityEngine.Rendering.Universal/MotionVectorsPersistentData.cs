// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.MotionVectorsPersistentData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000F1")]
internal sealed class MotionVectorsPersistentData
{
	[Token(Token = "0x400057A")]
	private const int k_MaxViewPerPass = 2;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x10")]
	private Matrix4x4[] m_stagingMatrixArray;

	[Token(Token = "0x400057C")]
	private const int k_EyeCount = 4;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0x18")]
	private int m_numPreviousViews;

	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0x20")]
	private readonly Matrix4x4[] m_Projection;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x28")]
	private readonly Matrix4x4[] m_View;

	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x30")]
	private readonly Matrix4x4[] m_ViewProjection;

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x38")]
	private readonly Matrix4x4[] m_PreviousProjection;

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x40")]
	private readonly Matrix4x4[] m_PreviousView;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x48")]
	private readonly Matrix4x4[] m_PreviousViewProjection;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x50")]
	private readonly Matrix4x4[] m_PreviousPreviousProjection;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x58")]
	private readonly Matrix4x4[] m_PreviousPreviousView;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x60")]
	private readonly int[] m_LastFrameIndex;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x68")]
	private readonly float[] m_PrevAspectRatio;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x70")]
	private float m_deltaTime;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x74")]
	private float m_lastDeltaTime;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x78")]
	private Vector3 m_worldSpaceCameraPos;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x84")]
	private Vector3 m_previousWorldSpaceCameraPos;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 m_previousPreviousWorldSpaceCameraPos;

	[Token(Token = "0x170001C8")]
	internal int lastFrameIndex
	{
		[Token(Token = "0x600068B")]
		[Address(RVA = "0x2C5DDD0", Offset = "0x2C5C3D0", VA = "0x182C5DDD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C9")]
	internal Matrix4x4 viewProjection
	{
		[Token(Token = "0x600068C")]
		[Address(RVA = "0x2C5DE90", Offset = "0x2C5C490", VA = "0x182C5DE90")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001CA")]
	internal Matrix4x4 previousViewProjection
	{
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x2C5DE20", Offset = "0x2C5C420", VA = "0x182C5DE20")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170001CB")]
	internal Matrix4x4[] viewProjectionStereo
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	internal Matrix4x4[] previousViewProjectionStereo
	{
		[Token(Token = "0x600068F")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	internal Matrix4x4[] stagingMatrixStereo
	{
		[Token(Token = "0x6000690")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	internal Matrix4x4[] projectionStereo
	{
		[Token(Token = "0x6000691")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	internal Matrix4x4[] previousProjectionStereo
	{
		[Token(Token = "0x6000692")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D0")]
	internal Matrix4x4[] previousPreviousProjectionStereo
	{
		[Token(Token = "0x6000693")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D1")]
	internal Matrix4x4[] viewStereo
	{
		[Token(Token = "0x6000694")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D2")]
	internal Matrix4x4[] previousViewStereo
	{
		[Token(Token = "0x6000695")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D3")]
	internal Matrix4x4[] previousPreviousViewStereo
	{
		[Token(Token = "0x6000696")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	internal float deltaTime
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x2C25B20", Offset = "0x2C24120", VA = "0x182C25B20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001D5")]
	internal float lastDeltaTime
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x58A550", Offset = "0x588B50", VA = "0x18058A550")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001D6")]
	internal Vector3 worldSpaceCameraPos
	{
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x2C5DEE0", Offset = "0x2C5C4E0", VA = "0x182C5DEE0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001D7")]
	internal Vector3 previousWorldSpaceCameraPos
	{
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x2C5DE70", Offset = "0x2C5C470", VA = "0x182C5DE70")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170001D8")]
	internal Vector3 previousPreviousWorldSpaceCameraPos
	{
		[Token(Token = "0x600069B")]
		[Address(RVA = "0x2C5DE00", Offset = "0x2C5C400", VA = "0x182C5DE00")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x2C5DC00", Offset = "0x2C5C200", VA = "0x182C5DC00")]
	internal MotionVectorsPersistentData()
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x2C5CC70", Offset = "0x2C5B270", VA = "0x182C5CC70")]
	public void Reset()
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x2C5CC40", Offset = "0x2C5B240", VA = "0x182C5CC40")]
	private static int GetXRMultiPassId(XRPass xr)
	{
		return default(int);
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x2C5D3F0", Offset = "0x2C5B9F0", VA = "0x182C5D3F0")]
	public void Update(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x2C5D170", Offset = "0x2C5B770", VA = "0x182C5D170")]
	public void SetGlobalMotionMatrices(RasterCommandBuffer cmd, XRPass xr)
	{
	}
}
