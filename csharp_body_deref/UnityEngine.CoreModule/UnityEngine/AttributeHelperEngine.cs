// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AttributeHelperEngine
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200013F")]
internal class AttributeHelperEngine
{
	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x0")]
	public static DisallowMultipleComponent[] _disallowMultipleComponentArray;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x8")]
	public static ExecuteInEditMode[] _executeInEditModeArray;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x10")]
	public static RequireComponent[] _requireComponentArray;

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x4DF31E0", Offset = "0x4DF31E0", VA = "0x4DF31E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static Type GetParentTypeDisallowingMultipleInclusion(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x4DF3320", Offset = "0x4DF3320", VA = "0x4DF3320")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static Type[] GetRequiredComponents(Type klass)
	{
		return null;
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x4DF38A0", Offset = "0x4DF38A0", VA = "0x4DF38A0")]
	private static int GetExecuteMode(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x4DF39A0", Offset = "0x4DF39A0", VA = "0x4DF39A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int CheckIsEditorScript(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x4DF3AD0", Offset = "0x4DF3AD0", VA = "0x4DF3AD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int GetDefaultExecutionOrderFor(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000979")]
	private static T GetCustomAttributeOfType<T>(Type klass) where T : Attribute
	{
		return null;
	}
}
