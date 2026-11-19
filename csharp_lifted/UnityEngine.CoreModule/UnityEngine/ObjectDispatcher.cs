// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ObjectDispatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200014F")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("GetObjectDispatcher()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ObjectDispatcher.h")]
internal sealed class ObjectDispatcher : IDisposable
{
	[Token(Token = "0x2000150")]
	public enum TransformTrackingType
	{
		[Token(Token = "0x400059B")]
		GlobalTRS,
		[Token(Token = "0x400059C")]
		LocalTRS,
		[Token(Token = "0x400059D")]
		Hierarchy
	}

	[Token(Token = "0x2000151")]
	[Flags]
	public enum TypeTrackingFlags
	{
		[Token(Token = "0x400059F")]
		SceneObjects = 1,
		[Token(Token = "0x40005A0")]
		Assets = 2,
		[Token(Token = "0x40005A1")]
		EditorOnlyObjects = 4,
		[Token(Token = "0x40005A2")]
		Default = SceneObjects | Assets,
		[Token(Token = "0x40005A3")]
		All = Default | EditorOnlyObjects
	}

	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x18")]
	private Allocator m_DispatchAllocator;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x20")]
	private TypeDispatchData m_TypeDispatchData;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x48")]
	private TransformDispatchData m_TransformDispatchData;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0xA8")]
	private Component[] m_TransformedComponents;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0xB0")]
	private Action<TypeDispatchData> m_TypeDataCallback;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0xB8")]
	private Action<TransformDispatchData> m_TransformDataCallback;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0xC0")]
	private Action<Component[]> m_TransformComponentCallback;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x0")]
	private static Action<Object[], IntPtr, IntPtr, int, int, Action<TypeDispatchData>> s_TypeDispatch;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x8")]
	private static Action<IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, int, Action<TransformDispatchData>> s_TransformDispatch;

	[Token(Token = "0x17000212")]
	public bool valid
	{
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x690AC20", Offset = "0x6909C20", VA = "0x690AC20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x690AC30", Offset = "0x6909C30", VA = "0x690AC30")]
	public ObjectDispatcher()
	{
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x690AE10", Offset = "0x6909E10", VA = "0x690AE10", Slot = "1")]
	~ObjectDispatcher()
	{
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x690AF90", Offset = "0x6909F90", VA = "0x690AF90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x690AF00", Offset = "0x6909F00", VA = "0x690AF00")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x690B0C0", Offset = "0x690A0C0", VA = "0x690B0C0")]
	private void ValidateSystemHandleAndThrow()
	{
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x690B120", Offset = "0x690A120", VA = "0x690B120")]
	private void ValidateTypeAndThrow(Type type)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x690B1F0", Offset = "0x690A1F0", VA = "0x690B1F0")]
	private void ValidateComponentTypeAndThrow(Type type)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x690B2C0", Offset = "0x690A2C0", VA = "0x690B2C0")]
	private void DispatchCallback(TypeDispatchData data)
	{
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x690B370", Offset = "0x690A370", VA = "0x690B370")]
	private void DispatchCallback(TransformDispatchData data)
	{
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x690B500", Offset = "0x690A500", VA = "0x690B500")]
	private void DispatchCallback(Component[] components)
	{
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x690B520", Offset = "0x690A520", VA = "0x690B520")]
	public void DispatchTypeChangesAndClear(Type type, Action<TypeDispatchData> callback, bool sortByInstanceID = false, bool noScriptingArray = false)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x690B680", Offset = "0x690A680", VA = "0x690B680")]
	public void DispatchTransformChangesAndClear(Type type, TransformTrackingType trackingType, Action<TransformDispatchData> callback)
	{
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x690B7C0", Offset = "0x690A7C0", VA = "0x690B7C0")]
	public TypeDispatchData GetTypeChangesAndClear(Type type, Allocator allocator, bool sortByInstanceID = false, bool noScriptingArray = false)
	{
		return default(TypeDispatchData);
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x690B810", Offset = "0x690A810", VA = "0x690B810")]
	public TransformDispatchData GetTransformChangesAndClear(Type type, TransformTrackingType trackingType, Allocator allocator)
	{
		return default(TransformDispatchData);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x690B880", Offset = "0x690A880", VA = "0x690B880")]
	public void EnableTypeTracking(TypeTrackingFlags typeTrackingMask, params Type[] types)
	{
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x690BA10", Offset = "0x690AA10", VA = "0x690BA10")]
	public void EnableTransformTracking(TransformTrackingType trackingType, params Type[] types)
	{
	}

	[Token(Token = "0x6000C07")]
	public TypeDispatchData GetTypeChangesAndClear<T>(Allocator allocator, bool sortByInstanceID = false, bool noScriptingArray = false) where T : Object
	{
		return default(TypeDispatchData);
	}

	[Token(Token = "0x6000C08")]
	public TransformDispatchData GetTransformChangesAndClear<T>(TransformTrackingType trackingType, Allocator allocator) where T : Object
	{
		return default(TransformDispatchData);
	}

	[Token(Token = "0x6000C09")]
	public void EnableTypeTracking<T>(TypeTrackingFlags typeTrackingMask = TypeTrackingFlags.Default) where T : Object
	{
	}

	[Token(Token = "0x6000C0A")]
	public void EnableTransformTracking<T>(TransformTrackingType trackingType) where T : Object
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x690ADE0", Offset = "0x6909DE0", VA = "0x690ADE0")]
	private static extern IntPtr CreateDispatchSystemHandle();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x690B090", Offset = "0x690A090", VA = "0x690B090")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void DestroyDispatchSystemHandle(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x690B9D0", Offset = "0x690A9D0", VA = "0x690B9D0")]
	private static extern void EnableTypeTracking(IntPtr ptr, Type type, TypeTrackingFlags typeTrackingMask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x690BB60", Offset = "0x690AB60", VA = "0x690BB60")]
	private static extern void EnableTransformTracking(IntPtr ptr, Type type, TransformTrackingType trackingType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x690B620", Offset = "0x690A620", VA = "0x690B620")]
	private static extern void DispatchTypeChangesAndClear(IntPtr ptr, Type type, Action<Object[], IntPtr, IntPtr, int, int, Action<TypeDispatchData>> callback, bool sortByInstanceID, bool noScriptingArray, Action<TypeDispatchData> param);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x690B770", Offset = "0x690A770", VA = "0x690B770")]
	private static extern void DispatchTransformDataChangesAndClear(IntPtr ptr, Type type, TransformTrackingType trackingType, Action<IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, int, Action<TransformDispatchData>> callback, Action<TransformDispatchData> param);
}
