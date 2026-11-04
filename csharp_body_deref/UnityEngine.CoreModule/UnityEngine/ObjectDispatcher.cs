// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ObjectDispatcher
// Update status: NEW in this game update
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

[Token(Token = "0x200014E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ObjectDispatcher.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("GetObjectDispatcher()", UnityEngine.Bindings.StaticAccessorType.Dot)]
internal sealed class ObjectDispatcher : IDisposable
{
	[Token(Token = "0x200014F")]
	public enum TransformTrackingType
	{
		[Token(Token = "0x4000596")]
		GlobalTRS,
		[Token(Token = "0x4000597")]
		LocalTRS,
		[Token(Token = "0x4000598")]
		Hierarchy
	}

	[Token(Token = "0x2000150")]
	[Flags]
	public enum TypeTrackingFlags
	{
		[Token(Token = "0x400059A")]
		SceneObjects = 1,
		[Token(Token = "0x400059B")]
		Assets = 2,
		[Token(Token = "0x400059C")]
		EditorOnlyObjects = 4,
		[Token(Token = "0x400059D")]
		Default = SceneObjects | Assets,
		[Token(Token = "0x400059E")]
		All = Default | EditorOnlyObjects
	}

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x18")]
	private Allocator m_DispatchAllocator;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x20")]
	private TypeDispatchData m_TypeDispatchData;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x48")]
	private TransformDispatchData m_TransformDispatchData;

	[Token(Token = "0x400058F")]
	[FieldOffset(Offset = "0xA8")]
	private Component[] m_TransformedComponents;

	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0xB0")]
	private Action<TypeDispatchData> m_TypeDataCallback;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0xB8")]
	private Action<TransformDispatchData> m_TransformDataCallback;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0xC0")]
	private Action<Component[]> m_TransformComponentCallback;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x0")]
	private static Action<Object[], IntPtr, IntPtr, int, int, Action<TypeDispatchData>> s_TypeDispatch;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x8")]
	private static Action<IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, int, Action<TransformDispatchData>> s_TransformDispatch;

	[Token(Token = "0x1700020D")]
	public bool valid
	{
		[Token(Token = "0x6000BE4")]
		[Address(RVA = "0x2F1FA00", Offset = "0x2F1E000", VA = "0x182F1FA00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x2F1F880", Offset = "0x2F1DE80", VA = "0x182F1F880")]
	public ObjectDispatcher()
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x2F1F1D0", Offset = "0x2F1D7D0", VA = "0x182F1F1D0", Slot = "1")]
	~ObjectDispatcher()
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x2F1ECF0", Offset = "0x2F1D2F0", VA = "0x182F1ECF0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x2F1EC60", Offset = "0x2F1D260", VA = "0x182F1EC60")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x2F1F5F0", Offset = "0x2F1DBF0", VA = "0x182F1F5F0")]
	private void ValidateSystemHandleAndThrow()
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x2F1F660", Offset = "0x2F1DC60", VA = "0x182F1F660")]
	private void ValidateTypeAndThrow(Type type)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x2F1F520", Offset = "0x2F1DB20", VA = "0x182F1F520")]
	private void ValidateComponentTypeAndThrow(Type type)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x2F1E6C0", Offset = "0x2F1CCC0", VA = "0x182F1E6C0")]
	private void DispatchCallback(TypeDispatchData data)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x2F1E7C0", Offset = "0x2F1CDC0", VA = "0x182F1E7C0")]
	private void DispatchCallback(TransformDispatchData data)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
	private void DispatchCallback(Component[] components)
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x2F1EB40", Offset = "0x2F1D140", VA = "0x182F1EB40")]
	public void DispatchTypeChangesAndClear(Type type, Action<TypeDispatchData> callback, bool sortByInstanceID = false, bool noScriptingArray = false)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x2F1E980", Offset = "0x2F1CF80", VA = "0x182F1E980")]
	public void DispatchTransformChangesAndClear(Type type, TransformTrackingType trackingType, Action<TransformDispatchData> callback)
	{
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x2F1F3C0", Offset = "0x2F1D9C0", VA = "0x182F1F3C0")]
	public TypeDispatchData GetTypeChangesAndClear(Type type, Allocator allocator, bool sortByInstanceID = false, bool noScriptingArray = false)
	{
		return default(TypeDispatchData);
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x2F1F230", Offset = "0x2F1D830", VA = "0x182F1F230")]
	public TransformDispatchData GetTransformChangesAndClear(Type type, TransformTrackingType trackingType, Allocator allocator)
	{
		return default(TransformDispatchData);
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x2F1EF90", Offset = "0x2F1D590", VA = "0x182F1EF90")]
	public void EnableTypeTracking(TypeTrackingFlags typeTrackingMask, params Type[] types)
	{
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x2F1ED50", Offset = "0x2F1D350", VA = "0x182F1ED50")]
	public void EnableTransformTracking(TransformTrackingType trackingType, params Type[] types)
	{
	}

	[Token(Token = "0x6000BF5")]
	public TypeDispatchData GetTypeChangesAndClear<T>(Allocator allocator, bool sortByInstanceID = false, bool noScriptingArray = false) where T : Object
	{
		return default(TypeDispatchData);
	}

	[Token(Token = "0x6000BF6")]
	public TransformDispatchData GetTransformChangesAndClear<T>(TransformTrackingType trackingType, Allocator allocator) where T : Object
	{
		return default(TransformDispatchData);
	}

	[Token(Token = "0x6000BF7")]
	public void EnableTypeTracking<T>(TypeTrackingFlags typeTrackingMask = TypeTrackingFlags.Default) where T : Object
	{
	}

	[Token(Token = "0x6000BF8")]
	public void EnableTransformTracking<T>(TransformTrackingType trackingType) where T : Object
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x2F1E650", Offset = "0x2F1CC50", VA = "0x182F1E650")]
	private static extern IntPtr CreateDispatchSystemHandle();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x2F1E680", Offset = "0x2F1CC80", VA = "0x182F1E680")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern void DestroyDispatchSystemHandle(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x2F1F170", Offset = "0x2F1D770", VA = "0x182F1F170")]
	private static extern void EnableTypeTracking(IntPtr ptr, Type type, TypeTrackingFlags typeTrackingMask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x2F1EF30", Offset = "0x2F1D530", VA = "0x182F1EF30")]
	private static extern void EnableTransformTracking(IntPtr ptr, Type type, TransformTrackingType trackingType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x2F1EAE0", Offset = "0x2F1D0E0", VA = "0x182F1EAE0")]
	private static extern void DispatchTypeChangesAndClear(IntPtr ptr, Type type, Action<Object[], IntPtr, IntPtr, int, int, Action<TypeDispatchData>> callback, bool sortByInstanceID, bool noScriptingArray, Action<TypeDispatchData> param);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x2F1EA90", Offset = "0x2F1D090", VA = "0x182F1EA90")]
	private static extern void DispatchTransformDataChangesAndClear(IntPtr ptr, Type type, TransformTrackingType trackingType, Action<IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, int, Action<TransformDispatchData>> callback, Action<TransformDispatchData> param);
}
