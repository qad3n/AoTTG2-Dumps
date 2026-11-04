// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.EnsureThat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace Unity.VisualScripting;

[Token(Token = "0x2000054")]
public class EnsureThat
{
	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string paramName;

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x2DA4870", Offset = "0x2DA2E70", VA = "0x182DA4870")]
	public void IsTrue(bool value)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x2DA3970", Offset = "0x2DA1F70", VA = "0x182DA3970")]
	public void IsFalse(bool value)
	{
	}

	[Token(Token = "0x6000225")]
	public void HasItems<T>(T value) where T : class, ICollection
	{
	}

	[Token(Token = "0x6000226")]
	public void HasItems<T>(ICollection<T> value)
	{
	}

	[Token(Token = "0x6000227")]
	public void HasItems<T>(T[] value)
	{
	}

	[Token(Token = "0x6000228")]
	public void HasNoNullItem<T>(T value) where T : class, IEnumerable
	{
	}

	[Token(Token = "0x6000229")]
	public void HasItems<T>(IList<T> value)
	{
	}

	[Token(Token = "0x600022A")]
	public void HasItems<TKey, TValue>(IDictionary<TKey, TValue> value)
	{
	}

	[Token(Token = "0x600022B")]
	public void SizeIs<T>(T[] value, int expected)
	{
	}

	[Token(Token = "0x600022C")]
	public void SizeIs<T>(T[] value, long expected)
	{
	}

	[Token(Token = "0x600022D")]
	public void SizeIs<T>(T value, int expected) where T : ICollection
	{
	}

	[Token(Token = "0x600022E")]
	public void SizeIs<T>(T value, long expected) where T : ICollection
	{
	}

	[Token(Token = "0x600022F")]
	public void SizeIs<T>(ICollection<T> value, int expected)
	{
	}

	[Token(Token = "0x6000230")]
	public void SizeIs<T>(ICollection<T> value, long expected)
	{
	}

	[Token(Token = "0x6000231")]
	public void SizeIs<T>(IList<T> value, int expected)
	{
	}

	[Token(Token = "0x6000232")]
	public void SizeIs<T>(IList<T> value, long expected)
	{
	}

	[Token(Token = "0x6000233")]
	public void SizeIs<TKey, TValue>(IDictionary<TKey, TValue> value, int expected)
	{
	}

	[Token(Token = "0x6000234")]
	public void SizeIs<TKey, TValue>(IDictionary<TKey, TValue> value, long expected)
	{
	}

	[Token(Token = "0x6000235")]
	public void IsKeyOf<TKey, TValue>(IDictionary<TKey, TValue> value, TKey expectedKey, [Optional] string keyLabel)
	{
	}

	[Token(Token = "0x6000236")]
	public void Any<T>(IList<T> value, Func<T, bool> predicate)
	{
	}

	[Token(Token = "0x6000237")]
	public void Any<T>(ICollection<T> value, Func<T, bool> predicate)
	{
	}

	[Token(Token = "0x6000238")]
	public void Any<T>(T[] value, Func<T, bool> predicate)
	{
	}

	[Token(Token = "0x6000239")]
	public void Is<T>(T param, T expected) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600023A")]
	public void IsNot<T>(T param, T expected) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600023B")]
	public void IsLt<T>(T param, T limit) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600023C")]
	public void IsLte<T>(T param, T limit) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600023D")]
	public void IsGt<T>(T param, T limit) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600023E")]
	public void IsGte<T>(T param, T limit) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600023F")]
	public void IsInRange<T>(T param, T min, T max) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x2DA3D20", Offset = "0x2DA2320", VA = "0x182DA3D20")]
	public void IsNotEmpty(Guid value)
	{
	}

	[Token(Token = "0x6000241")]
	public void IsNotNull<T>(T? value) where T : struct
	{
	}

	[Token(Token = "0x6000242")]
	public void IsNull<T>([NoEnumeration] T value)
	{
	}

	[Token(Token = "0x6000243")]
	public void IsNotNull<T>([NoEnumeration] T value)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x2DA2D00", Offset = "0x2DA1300", VA = "0x182DA2D00")]
	public void HasAttribute(Type param, Type attributeType)
	{
	}

	[Token(Token = "0x6000245")]
	public void HasAttribute<TAttribute>(Type param) where TAttribute : Attribute
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x2DA2F90", Offset = "0x2DA1590", VA = "0x182DA2F90")]
	private void HasConstructorAccepting(Type param, Type[] parameterTypes, bool nonPublic)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x2DA31B0", Offset = "0x2DA17B0", VA = "0x182DA31B0")]
	public void HasConstructorAccepting(Type param, params Type[] parameterTypes)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x2DA3620", Offset = "0x2DA1C20", VA = "0x182DA3620")]
	public void HasPublicConstructorAccepting(Type param, params Type[] parameterTypes)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x2DA4380", Offset = "0x2DA2980", VA = "0x182DA4380")]
	public void IsNotNullOrWhiteSpace(string value)
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x2DA4190", Offset = "0x2DA2790", VA = "0x182DA4190")]
	public void IsNotNullOrEmpty(string value)
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x2DA4590", Offset = "0x2DA2B90", VA = "0x182DA4590")]
	public void IsNotNull(string value)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x2DA3BF0", Offset = "0x2DA21F0", VA = "0x182DA3BF0")]
	public void IsNotEmpty(string value)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x2DA31D0", Offset = "0x2DA17D0", VA = "0x182DA31D0")]
	public void HasLengthBetween(string value, int minLength, int maxLength)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x2DA4B20", Offset = "0x2DA3120", VA = "0x182DA4B20")]
	public void Matches(string value, string match)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x2DA4970", Offset = "0x2DA2F70", VA = "0x182DA4970")]
	public void Matches(string value, Regex match)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x2DA4CF0", Offset = "0x2DA32F0", VA = "0x182DA4CF0")]
	public void SizeIs(string value, int expected)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x2DA3640", Offset = "0x2DA1C40", VA = "0x182DA3640")]
	public void IsEqualTo(string value, string expected)
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x2DA37D0", Offset = "0x2DA1DD0", VA = "0x182DA37D0")]
	public void IsEqualTo(string value, string expected, StringComparison comparison)
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x2DA4000", Offset = "0x2DA2600", VA = "0x182DA4000")]
	public void IsNotEqualTo(string value, string expected)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x2DA3E60", Offset = "0x2DA2460", VA = "0x182DA3E60")]
	public void IsNotEqualTo(string value, string expected, StringComparison comparison)
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x2DA3A70", Offset = "0x2DA2070", VA = "0x182DA3A70")]
	public void IsGuid(string value)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x2DA4FB0", Offset = "0x2DA35B0", VA = "0x182DA4FB0")]
	private bool StringEquals(string x, string y, [Optional] StringComparison? comparison)
	{
		return default(bool);
	}

	[Token(Token = "0x6000257")]
	public void IsOfType<T>(T param, Type expectedType)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x2DA46A0", Offset = "0x2DA2CA0", VA = "0x182DA46A0")]
	public void IsOfType(Type param, Type expectedType)
	{
	}

	[Token(Token = "0x6000259")]
	public void IsOfType<T>(object param)
	{
	}

	[Token(Token = "0x600025A")]
	public void IsOfType<T>(Type param)
	{
	}

	[Token(Token = "0x600025B")]
	public void IsNotDefault<T>(T param) where T : struct
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public EnsureThat()
	{
	}
}
