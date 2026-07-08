using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000085")]
public static class RuntimeUtilities
{
	[Token(Token = "0x2000088")]
	[CompilerGenerated]
	private sealed class _003CGetAllSceneObjects_003Ed__84<T> : IEnumerable<T>, IEnumerable, IEnumerator<T>, IEnumerator, IDisposable where T : Component
	{
		[Token(Token = "0x4000266")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000267")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E2__current;

		[Token(Token = "0x4000268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000269")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Queue<Transform> _003Cqueue_003E5__2;

		[Token(Token = "0x400026A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private GameObject[] _003C_003E7__wrap2;

		[Token(Token = "0x400026B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap3;

		[Token(Token = "0x400026C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IEnumerator _003C_003E7__wrap4;

		[Token(Token = "0x1700004A")]
		private T System_002ECollections_002EGeneric_002EIEnumerator_003CT_003E_002ECurrent
		{
			[Token(Token = "0x6000245")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700004B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000247")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000241")]
		[DebuggerHidden]
		public _003CGetAllSceneObjects_003Ed__84(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000242")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000243")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000244")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000246")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000248")]
		[DebuggerHidden]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000249")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000252")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Texture2D m_WhiteTexture;

	[Token(Token = "0x4000253")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Texture3D m_WhiteTexture3D;

	[Token(Token = "0x4000254")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Texture2D m_BlackTexture;

	[Token(Token = "0x4000255")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Texture3D m_BlackTexture3D;

	[Token(Token = "0x4000256")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Texture2D m_TransparentTexture;

	[Token(Token = "0x4000257")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Texture3D m_TransparentTexture3D;

	[Token(Token = "0x4000258")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Dictionary<int, Texture2D> m_LutStrips;

	[Token(Token = "0x4000259")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static PostProcessResources s_Resources;

	[Token(Token = "0x400025A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static Mesh s_FullscreenTriangle;

	[Token(Token = "0x400025B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Material s_CopyStdMaterial;

	[Token(Token = "0x400025C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Material s_CopyStdFromDoubleWideMaterial;

	[Token(Token = "0x400025D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static Material s_CopyMaterial;

	[Token(Token = "0x400025E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static Material s_CopyFromTexArrayMaterial;

	[Token(Token = "0x400025F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static PropertySheet s_CopySheet;

	[Token(Token = "0x4000260")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static PropertySheet s_CopyFromTexArraySheet;

	[Token(Token = "0x4000261")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static IEnumerable<Type> m_AssemblyTypes;

	[Token(Token = "0x17000035")]
	public static Texture2D whiteTexture
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x48350B0", Offset = "0x48350B0", VA = "0x48350B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	public static Texture3D whiteTexture3D
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x483C130", Offset = "0x483C130", VA = "0x483C130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000037")]
	public static Texture2D blackTexture
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x483C2F0", Offset = "0x483C2F0", VA = "0x483C2F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public static Texture3D blackTexture3D
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x483C470", Offset = "0x483C470", VA = "0x483C470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public static Texture2D transparentTexture
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x483C630", Offset = "0x483C630", VA = "0x483C630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003A")]
	public static Texture3D transparentTexture3D
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x483C7B0", Offset = "0x483C7B0", VA = "0x483C7B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public static Mesh fullscreenTriangle
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x483C970", Offset = "0x483C970", VA = "0x483C970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public static Material copyStdMaterial
	{
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x482EC40", Offset = "0x482EC40", VA = "0x482EC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public static Material copyStdFromDoubleWideMaterial
	{
		[Token(Token = "0x6000208")]
		[Address(RVA = "0x4832C40", Offset = "0x4832C40", VA = "0x4832C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003E")]
	public static Material copyMaterial
	{
		[Token(Token = "0x6000209")]
		[Address(RVA = "0x483CCE0", Offset = "0x483CCE0", VA = "0x483CCE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	public static Material copyFromTexArrayMaterial
	{
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x483CE50", Offset = "0x483CE50", VA = "0x483CE50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000040")]
	public static PropertySheet copySheet
	{
		[Token(Token = "0x600020B")]
		[Address(RVA = "0x4832FC0", Offset = "0x4832FC0", VA = "0x4832FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public static PropertySheet copyFromTexArraySheet
	{
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x4832830", Offset = "0x4832830", VA = "0x4832830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	public static bool scriptableRenderPipelineActive
	{
		[Token(Token = "0x600021E")]
		[Address(RVA = "0x482AD30", Offset = "0x482AD30", VA = "0x482AD30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000043")]
	public static bool supportsDeferredShading
	{
		[Token(Token = "0x600021F")]
		[Address(RVA = "0x483DE30", Offset = "0x483DE30", VA = "0x483DE30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000044")]
	public static bool supportsDepthNormals
	{
		[Token(Token = "0x6000220")]
		[Address(RVA = "0x483DF00", Offset = "0x483DF00", VA = "0x483DF00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000045")]
	public static bool isSinglePassStereoEnabled
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x4830870", Offset = "0x4830870", VA = "0x4830870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000046")]
	public static bool isVREnabled
	{
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x483DFD0", Offset = "0x483DFD0", VA = "0x483DFD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000047")]
	public static bool isAndroidOpenGL
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x48248B0", Offset = "0x48248B0", VA = "0x48248B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public static RenderTextureFormat defaultHDRRenderTextureFormat
	{
		[Token(Token = "0x6000224")]
		[Address(RVA = "0x482E1E0", Offset = "0x482E1E0", VA = "0x482E1E0")]
		get
		{
			return default(RenderTextureFormat);
		}
	}

	[Token(Token = "0x17000049")]
	public static bool isLinearColorSpace
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x48253E0", Offset = "0x48253E0", VA = "0x48253E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4826C50", Offset = "0x4826C50", VA = "0x4826C50")]
	public static Texture2D GetLutStrip(int size)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4831510", Offset = "0x4831510", VA = "0x4831510")]
	internal static bool isValidResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4831590", Offset = "0x4831590", VA = "0x4831590")]
	internal static void UpdateResources(PostProcessResources resources)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x483CFC0", Offset = "0x483CFC0", VA = "0x483CFC0")]
	public static void SetRenderTargetWithLoadStoreAction(this CommandBuffer cmd, RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x483D020", Offset = "0x483D020", VA = "0x483D020")]
	public static void SetRenderTargetWithLoadStoreAction(this CommandBuffer cmd, RenderTargetIdentifier rt, RenderBufferLoadAction loadAction, RenderBufferStoreAction storeAction, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x483D080", Offset = "0x483D080", VA = "0x483D080")]
	public static void SetRenderTargetWithLoadStoreAction(this CommandBuffer cmd, RenderTargetIdentifier color, RenderBufferLoadAction colorLoadAction, RenderBufferStoreAction colorStoreAction, RenderTargetIdentifier depth, RenderBufferLoadAction depthLoadAction, RenderBufferStoreAction depthStoreAction)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4825ED0", Offset = "0x4825ED0", VA = "0x4825ED0")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, [Optional][DefaultParameterValue(false)] bool clear, [Optional] Rect? viewport, bool preserveDepth = false)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x483D140", Offset = "0x483D140", VA = "0x483D140")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, RenderBufferLoadAction loadAction, [Optional] Rect? viewport, bool preserveDepth = false)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x48244B0", Offset = "0x48244B0", VA = "0x48244B0")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, [Optional][DefaultParameterValue(false)] bool clear, [Optional] Rect? viewport, bool preserveDepth = false)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4832DB0", Offset = "0x4832DB0", VA = "0x4832DB0")]
	public static void BlitFullscreenTriangleFromDoubleWide(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, Material material, int pass, int eye)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x48359C0", Offset = "0x48359C0", VA = "0x48359C0")]
	public static void BlitFullscreenTriangleToDoubleWide(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, int eye)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x48329A0", Offset = "0x48329A0", VA = "0x48329A0")]
	public static void BlitFullscreenTriangleFromTexArray(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, bool clear = false, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4835760", Offset = "0x4835760", VA = "0x4835760")]
	public static void BlitFullscreenTriangleToTexArray(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, PropertySheet propertySheet, int pass, bool clear = false, int depthSlice = -1)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x483D4E0", Offset = "0x483D4E0", VA = "0x483D4E0")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, RenderTargetIdentifier depth, PropertySheet propertySheet, int pass, [Optional][DefaultParameterValue(false)] bool clear, [Optional] Rect? viewport)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x483D8C0", Offset = "0x483D8C0", VA = "0x483D8C0")]
	public static void BlitFullscreenTriangle(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier[] destinations, RenderTargetIdentifier depth, PropertySheet propertySheet, int pass, [Optional][DefaultParameterValue(false)] bool clear, [Optional] Rect? viewport)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x483DB30", Offset = "0x483DB30", VA = "0x483DB30")]
	public static void BuiltinBlit(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x482EDB0", Offset = "0x482EDB0", VA = "0x482EDB0")]
	public static void BuiltinBlit(this CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, Material mat, int pass = 0)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x483DC40", Offset = "0x483DC40", VA = "0x483DC40")]
	public static void CopyTexture(CommandBuffer cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x482E1F0", Offset = "0x482E1F0", VA = "0x482E1F0")]
	public static bool isFloatingPointFormat(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4835230", Offset = "0x4835230", VA = "0x4835230")]
	internal static bool hasAlpha(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4824920", Offset = "0x4824920", VA = "0x4824920")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x483DFE0", Offset = "0x483DFE0", VA = "0x483DFE0")]
	public static bool IsResolvedDepthAvailable(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x483E040", Offset = "0x483E040", VA = "0x483E040")]
	public static void DestroyProfile(PostProcessProfile profile, bool destroyEffects)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x483E2D0", Offset = "0x483E2D0", VA = "0x483E2D0")]
	public static void DestroyVolume(PostProcessVolume volume, bool destroyProfile, bool destroyGameObject = false)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x483E510", Offset = "0x483E510", VA = "0x483E510")]
	public static bool IsPostProcessingActive(PostProcessLayer layer)
	{
		return default(bool);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x483E580", Offset = "0x483E580", VA = "0x483E580")]
	public static bool IsTemporalAntialiasingActive(PostProcessLayer layer)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x482B090", Offset = "0x482B090", VA = "0x482B090")]
	public static bool IsDynamicResolutionEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[IteratorStateMachine(typeof(_003CGetAllSceneObjects_003Ed__84<>))]
	public static IEnumerable<T> GetAllSceneObjects<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	public static void CreateIfNull<T>(ref T obj) where T : class, new()
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x48244A0", Offset = "0x48244A0", VA = "0x48244A0")]
	public static float Exp2(float x)
	{
		return default(float);
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x483E680", Offset = "0x483E680", VA = "0x483E680")]
	public static Matrix4x4 GetJitteredPerspectiveProjectionMatrix(Camera camera, Vector2 offset)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x483E850", Offset = "0x483E850", VA = "0x483E850")]
	public static Matrix4x4 GetJitteredOrthographicProjectionMatrix(Camera camera, Vector2 offset)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x483E9B0", Offset = "0x483E9B0", VA = "0x483E9B0")]
	public static Matrix4x4 GenerateJitteredProjectionMatrixFromOriginal(PostProcessRenderContext context, Matrix4x4 origProj, Vector2 jitter)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x483EAD0", Offset = "0x483EAD0", VA = "0x483EAD0")]
	public static IEnumerable<Type> GetAllAssemblyTypes()
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	public static IEnumerable<Type> GetAllTypesDerivedFrom<T>()
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	public static T GetAttribute<T>(this Type type) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	public static Attribute[] GetMemberAttributes<TType, TValue>(Expression<Func<TType, TValue>> expr)
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	public static string GetFieldPath<TType, TValue>(Expression<Func<TType, TValue>> expr)
	{
		return null;
	}
}
