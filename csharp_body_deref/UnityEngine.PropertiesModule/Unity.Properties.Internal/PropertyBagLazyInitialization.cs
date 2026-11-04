// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.Internal.PropertyBagLazyInitialization
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Properties.Internal;

[Token(Token = "0x200009F")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal static class PropertyBagLazyInitialization
{
	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, Func<IPropertyBag>> s_LazyPropertyBagRegistrations;

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x2FECB10", Offset = "0x2FEB110", VA = "0x182FECB10")]
	public static void AddLazyRegistration(Type type, Func<IPropertyBag> registration)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x2FECBA0", Offset = "0x2FEB1A0", VA = "0x182FECBA0")]
	public static bool HasLazyRegistration(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x2FECCA0", Offset = "0x2FEB2A0", VA = "0x182FECCA0")]
	public static bool TryGetRegistrationDelegate(Type type, out Func<IPropertyBag> registrationDelegate)
	{
		return default(bool);
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x2FECC20", Offset = "0x2FEB220", VA = "0x182FECC20")]
	public static void RemoveRegistration(Type type)
	{
	}
}
